// Relation operator
//Ayush Garg
//20/03/2023
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number\n");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Both are equal\n");
    }
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    if (a < b)
    {
        printf("A is less than b\n");
    }
    if (a != b)
    {
        printf("a is not equal to b\n");
    }
    if (a >= b)
    {
        printf("a is greater than and equal to b\n");
    }
    if (a <= b)
    {
        printf("a is less than and equal to b\n");
    }
}