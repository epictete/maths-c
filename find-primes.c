#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    if (n < 2) return 0;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int FindPrimes(int n, int A[])
{
    if (n < 2) return -1;

    int index = 0;

    for (int i = 2; i <= n; i++)
        if (IsPrime(i))
            A[index++] = i;

    return index;
}

int main(void)
{
    int n;
    int A[101];

    printf("Enter a number : ");
    scanf("%d", &n);

    int index = FindPrimes(n, A);

    if (index == -1)
    {
        printf("%d has no prime number\n", n);

        return 0;
    }
    else
    {
        printf("%d has %d prime number(s) : [ ", n, index);

        for (int i = 0; i < index; i++)
            printf("%d ", A[i]);

        printf("]\n");
    }

    return 0;
}