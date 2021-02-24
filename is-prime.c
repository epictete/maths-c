#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    if (n < 2) return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;

    return 1;
}

int main(void)
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (IsPrime(n)) printf("%d is a prime number\n", n);
    else printf("%d is NOT a prime number\n", n);

    return 0;
}