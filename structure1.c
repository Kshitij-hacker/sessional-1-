#include <stdio.h>
#include <string.h>

struct bill
{
    char Name_of_product[10];
    int quantity;
    float rate;
    float amount;
};

struct bill bill_1;

int main()

{

// input structure value
    printf("Enter the Product Name\n");
    scanf("%s", &bill_1.Name_of_product);
    printf("Enter the quantity of product\n");
    scanf("%d", &bill_1.quantity);
    printf("Enter the rate of product\n");
    scanf("%f", &bill_1.rate);
    bill_1.amount = bill_1.rate * bill_1.quantity;

// Printing structure
    printf("Name of product: %s\n", bill_1.Name_of_product);
    printf("Quantity of product: %d\n", bill_1.quantity);
    printf("Rate of product: %f\n", bill_1.rate);
    printf("Amount of product: %f\n", bill_1.amount);
}