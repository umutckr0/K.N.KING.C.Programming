#include <stdio.h>

#define TAX_PERCENT 20

int main (void)
{
    float amount, total;

    printf("Enter an amount(positive integer): \n");
    scanf("%f", &amount);

    total = ( amount * (TAX_PERCENT + 100 ) ) / 100;

    printf("The total is: %.2f" , total);

}