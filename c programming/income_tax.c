#include <stdio.h>

int main()
{
    float income, tax = 0;
    printf("Enter your income \n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 100000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 100000)
    {
        tax = tax + 0.30 * (income - 100000);
    }
    printf("Your net income tax to be paid by the end of the month is %f \n", tax);

    return 0;
}