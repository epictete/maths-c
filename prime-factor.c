#include <stdio.h>
#include <math.h>

void PrimeFactor(int n)
{
    int count, i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count = 0;
            while (n % i == 0)
            {
                n = n / i;
                count++;
            }
            printf("\t(%d, %d)\n", i, count);
        }
    }
    if (n != 1) printf("\t(%d, 1)\n", n);
}

int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Prime factor(s) :\n");
    printf("\t(base, exponent)\n");
    printf("\t----------------\n");
    PrimeFactor(n);
    return 0;
}