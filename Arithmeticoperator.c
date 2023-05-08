// 20/03/2023
// Arithmetic operator
// Ayush Garg
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the no.\n");
    scanf("%d %d", &num1, &num2);

    printf("The sum is %d\n", num1 + num2);
    printf("The Product is %d\n", num1 * num2);
    printf("The Division is %d\n", num1 / num2);
    printf("The Difference is %d\n", num1 - num2);
    printf("The remainder is %d\n", num1 % num2);

    printf("The post increment is %d\n", num1++);
    printf("The post increment is %d\n", num2++);

    printf("The post decrement is %d\n", num1--);
    printf("The post decrement is %d\n", num2--);

    printf("The pre increment is %d\n", ++num1);
    printf("The pre increment is %d\n", ++num2);

    printf("The pre decrement is %d\n", --num1);
    printf("The pre decrement is %d\n", --num2);
}