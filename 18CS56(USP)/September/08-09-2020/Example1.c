// Write a c program to read the content of text file which is given as the command line parameter

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("File err ..\n");
        exit(-1);
    }
    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);
}