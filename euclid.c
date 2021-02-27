#include <stdio.h>

int Euclid(int a, int b)
{
    int dividend = a >= b ? a : b;
    int divisor = a < b ? a : b;

    while (divisor != 0)
    {
        int remainder = dividend % divisor;

        dividend = divisor;
        divisor = remainder;
    }

    return dividend;
}

int main(void)
{
    int a, b;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("The GCD is : %d\n", Euclid(a, b));

    return 0;
}