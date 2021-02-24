#include <stdio.h>

void DecimalToBinary(int n, int* i, int A[])
{
    while (n > 0)
    {
        int remainder = n % 2;
        A[*i] = remainder;
        n = n / 2;
        *i = *i + 1;
    }
}

int main(void)
{
    int n, i = 0;
    int A[20];

    printf("Enter a decimal number : ");
    scanf("%d", &n);

    DecimalToBinary(n, &i, A);

    printf("The binary equivalent is : ");
    for (int j = i - 1; j >= 0; j--) printf("%d", A[j]);
    printf("\n");

    return 0;
}