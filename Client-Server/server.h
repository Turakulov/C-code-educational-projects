struct message
{
        char privfifo[15]; //имя частного имен. файла
        char filename[100]; // имя запрошенного файла
};
#define PUBLIC "public" // имя общедоступного имен. прогр. канала
#define LINESIZE 512
