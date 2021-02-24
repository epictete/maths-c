#include <stdio.h>
#include <math.h>

int FindPrimes(int n, int Primes[])
{
    for (int i = 0; i <= n; i++)
        Primes[i] = 1;
    Primes[0] = 0;
    Primes[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (Primes[i] == 1)
            for (int j = i; i * j <= n; j++)
                Primes[i * j] = 0;
}

int main(void)
{
    int n;
    int Primes[101];

    printf("Enter a number : ");
    scanf("%d", &n);

    FindPrimes(n, Primes);

    printf("Prime number(s): [ ");
    for (int i = 0; i <= n; i++)
        if (Primes[i])
            printf("%d ", i);
    printf("]\n");

    return 0;
}