// Write a c program to accept the number of elements in the array and the array elements
// and findout the avg of the numbers given give tghe inputs in a file called as ip1.txt and send the op to file op1.txt

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b[a];
    int i;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }

    int sum = 0;
    for (i = 0; i < a; i++)
    {
        sum += b[i];
    }
    float avg = sum / a;
    print("%6.2f\n", avg);
}