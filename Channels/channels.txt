#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define R 0
#define W 1

int main(void)
{
        int pid, p[2], q[2];
        FILE *fdopen(), *fp;

        pipe(p);
        pipe(q);

        switch(pid = fork())
        {
                case 0:
                        close(p[W]);
                        close(R);
                        dup(p[R]);
                        close(p[R]);

                        close(q[R]);
                        close(W);
                        dup(q[W]);
                        close(q[W]);

                        execl("filter2", "filter2", 0);

                        printf("filter: Ошибка при вызове");
                        exit(1);
                case -1:
                        printf("Ошибка при вызове fork() \n");
                        exit(1);
                default:
                        close(p[R]);
                        close(q[W]);

                        fp = fdopen(p[W], "w");

                        		 char c, c1;
    int i;

    i = 1;
    c1 = getchar();
    if (c1 != ' '){
        putchar('1');
        putchar(':');
        i = 2;
    }
    while ((c = getchar()) != EOF){
        if ((c1 == ' ' || c1 == '\n') && c != ' ' && c != '\n'){
            putchar(c1);
            if (i < 10)
                putchar(i + '0');
            else{
                int j,k;
                k = i%10;
                j = (i - k)/10;
                putchar(j + '0');
                putchar(k + '0');
            }
            putchar(':');
            i++;
        }
        else
            putchar(c1);
        if (c == '\n')
            i = 1;
        c1 = c;
    }
    return 0;


                       

                        fclose(fp);

                        close(R);
                        dup(q[R]);
                        close(q[R]);

                        while ((c = getchar()) != '*')
                        {
                                printf("%c", c);
                        }
                        exit(0);
        }
}
