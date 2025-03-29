#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
        DIR *dp;  //указатель на поток файлов каталога
        struct dirent *d;
        char fullpath[200];
        for(int i = 0;i < 200; fullpath[i++] = NULL);
        int i;
        int end = 0;

        dp = opendir(".");
        while ((d = readdir(dp)))
        {
            if (strcmp(d->d_name,".") == 0)
                i = d->d_ino;
        }

        while (end == 0) {
        chdir("..");
        {
            dp = opendir(".");
            while ((d = readdir(dp)))
            {
                    if (d->d_ino == i)
                    {
                        char buff[200];
                        for (int i = 0; i<200;buff[i++]=NULL);
                        buff[0] = '/';
                        strcat(buff,d->d_name);
                        strcat(buff,fullpath);
                        strcpy(fullpath,buff);
                        if (strcmp(d->d_name,"usr") == 0)
                            end = 1;
                    }
            }
            dp = opendir(".");
            while((d = readdir(dp)))
            {
                if (strcmp(d->d_name,".") == 0)
                    i = d->d_ino;
            }
        }
        }
        printf("%s\n",fullpath);
        exit(0);
}
