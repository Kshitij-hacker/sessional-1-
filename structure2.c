#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char address[10];
    char phone[10];
    float salary;
    
};

struct employee e1;

int main()

{

// input structure value
    printf("Enter the Id\n");
    scanf("%d", &e1.id);
    printf("Enter the Address\n");
    scanf("%s", &e1.address);
    printf("Enter the phone number\n");
    scanf("%s", &e1.phone);
    printf("Enter the salary\n");
    scanf("%f", &e1.salary);
    

// Printing structure
    printf("ID : %d\n",e1.id);
    printf("Address : %s\n",e1.address);
    printf("Phone Number : %s\n",e1.phone);
    printf("Salary : %f\n",e1.salary);
   
}