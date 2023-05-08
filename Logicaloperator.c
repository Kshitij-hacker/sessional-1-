//logical operator
//Ayush Garg
//20/03/2023
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number\n");
    scanf("%d %d", &a, &b);

    c = (a > 0 && b > 0);
    printf("(a > 0 && b > 0) is %d\n", c);

    c = (a > 0 || b > 0);
    printf("(a>0||b>0) is %d\n", c);

    c=(a!=b);
    printf("a!=b is %d\n",c);

}