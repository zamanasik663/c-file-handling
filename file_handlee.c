#include<stdio.h>

int main()
{

    FILE *fp;
    fp = fopen("file.txt","w");

    if(fp == NULL)
    {
       printf("file can't open\n");
    }
    fclose(fp);


    return 0;
}