#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc != 3)
    {
        printf("usage: eg3 <count> <message>\n");
        exit(-1);
    }

    for (i = 0; i < atoi(argv[1]); i++)
    {
        printf("%s\n", argv);
    }
}