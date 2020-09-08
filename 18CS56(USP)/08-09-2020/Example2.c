//write a program to write a file which is given as the command line parameter
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    fp = fopen(argv[1], "w");
    if (fp == NULL)
    {
        printf('File err\n');
        exit(-1);
    }

    fputs("Computer Science and Engineering", fp);
    fclose(fp);
}