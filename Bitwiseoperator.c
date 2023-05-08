//Bitwise operator 
//20/03/2023
//Ayush Garg
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number\n");
    scanf("%d %d",&a,&b);

    printf("a & b is %d\n",a&b);
    printf("a or b is %d\n",a|b);
    printf("a xor b is %d\n",a^b);
    printf("a complement is %d\n",~a);
    printf("b complement is %d\n",~b);
    printf("a left shift is %d\n",a<<1);
    printf("b left shift is %d\n",b<<1);
    printf("a right shift is %d\n",a>>1);
    printf("b right shift is %d\n",b>>1);

}