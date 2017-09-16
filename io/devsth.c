#include<stdio.h>

int main()
{
    FILE *fp = fopen("/dev/pts/13","rw");
    for (int i = 0; i < 10; i++)
    {
         fprintf(fp,"Count %d\n",i);
    }
    fclose(fd);
}

