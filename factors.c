#include <stdio.h>
#include <math.h>

void Factors(int n, int A[], int B[], int* indexA, int* indexB)
{
    *indexA = 0;
    *indexB = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            A[*indexA] = i;
            *indexA = *indexA + 1;

            if (i != sqrt(n))
            {
                B[*indexB] = n / i;
                *indexB = *indexB + 1;
            }
        }
    }
}

int main(void)
{
    int A[51];
    int B[51];
    int indexA, indexB, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    Factors(n, A, B, &indexA, &indexB);

    printf("Factors of %d are : [ ", n);

    for (int i = 0; i < indexA; i++)
        printf("%d ", A[i]);

    for (int i = indexB - 1; i >= 0; i--)
        printf("%d ", B[i]);

    printf("]\n");

    return 0;
}