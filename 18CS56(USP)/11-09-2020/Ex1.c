// Write a c program to accept two command line arguments indicating
// the source file name and the destinatinon file nae read the contents of the source file and copy it to the destination file
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./ex1 <srcfile> <destfile>");
        exit(-1);
    }

    FILE *fp1, *fp2;

    fp1 = fopen(argv[1], "r");
    if (fp1 == NULL)
    {
        printf("File not found\n");
        exit(-1);
    }

    fp2 = fopen(argv[2], "w");
    if (fp2 == NULL)
    {
        printf("Error writing to file\n");
        exit(-1);
    }

    int c;
    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(c, fp2);
    }
}