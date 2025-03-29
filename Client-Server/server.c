#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#include "server.h"

int main(int argc, char **argv)
{
        int fdpub, fdpriv, fd;
        struct message msg; //структура сообщения, чит из общд. имен. канала
        int n;
        char line[LINESIZE];
        char line_in[LINESIZE];

        loop: /* Общедоступный канал откурывается для чтения
                Системный вызов open() блокируется если никакой
                процесс-клиент не открывает другой конец канала */
                if ((fdpub = open(PUBLIC, O_RDONLY)) == -1)
                {
                        perror (PUBLIC);
                        exit(1);
                }

                /* Из общедоступного канала читается сообщение,
                содержащее имена личного канала и требуемого файла.
                Требуемый файл открывается для чтения */
                while(read(fdpub, (char*)&msg, sizeof(msg)) > 0)
                {
                        if ((fd = open(msg.filename, O_RDONLY)) == -1)
                        {
                                perror(msg.filename);
                                break;
                        }

                        /* Личный канал открывается для записи. Файловый сервер
                        спит пока клиент не откроет свой конец для личного канала
                        Если возникли проблемы и клиент не может открыть канал,
                        то сервер будет заблокирован на этом open()
                        !См. соответствующие ключи, предотвращающие блок. */
                        if ((fdpriv = open(msg.privfifo, O_WRONLY)) == -1)
                        {
                                perror(msg.privfifo);
                                break;
                        }

                        // Данные из файла копируются в личный имен. канал
                        while((n = read(fd, line_in, LINESIZE)) > 0)
                        {
                                char line_out[LINESIZE], c, c1;
                                int i = 0, a = 0, li = 0;

                                i = 1;
                                c1 = line_in[a];

                                if (c1 != ' ')
                                {
                                    line_out[li++] = '1';
                                    line_out[li++] = ':';
                                    i = 2;
                                }

                                while (a < n)
                                {
                                    c = line_in[a];

                                    if((c1 == ' ' || c1 == '\n') && c != ' ' && c != '\n')
                                    {
                                        line_out[li++] = c1;
                                        if(i<10)
                                        {
                                            line_out[li++] = (i + '0');
                                        }
                                        else
                                        {
                                            int j,k;
                                            k = i%10;
                                            j = (i - k)/10;
                                            line_out[li++] = (j + '0');
                                            line_out[li++] = (k + '0');
                                        }
                                        line_out[li++] = ':';
                                        i++;
                                    }
                                    else
                                    {
                                        line_out[li++] = c1;
                                    }

                                    if (c == '\n')
                                    {
                                        i = 1;
                                    }
                                    c1 = c;

                                    a++;
                                }
                                write(fdpriv, line_out,li);
                        }
                        /* Когда копирование закончено, требуемый
                         файл и личный имен. канал закрываются */
                        close (fd);
                        close (fdpriv);
                }

                /* Закрыть общедоступный канал. Сервер переходит
                к следующему витку цикла. Причина для закрытия и
                повторного открытия состоит в том, что хочется,
                чтобы файловый сервер спал на open(), ожидая
                запросов */
                close (fdpub);
                goto loop;
}
