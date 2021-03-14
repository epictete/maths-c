#include <stdio.h>

int Max(int a, int b)
{
    return a >= b ? a : b;
}

int MaxSumSubarray1(int A[], int n)
{
    int ans = A[0], sum = 0;

    for (int i = 1; i < n; i++)
    {
        ans = Max(ans, A[i]);
    }

    if (ans < 0) return ans;

    ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + A[i] > 0)
            sum += A[i];
        else
            sum = 0;
        ans = Max(ans, sum);
    }

    return ans;
}

int MaxSumSubarray2(int A[], int n)
{
    int ans = A[0], sum = 0;

    for (int i = 1; i < n; i++)
    {
        ans = Max(ans, A[i]);
    }

    if (ans < 0) return ans;

    ans = 0;

    for (int i = 0; i < n; i++)
    {
        sum = Max(sum + A[i], A[i]);
        ans = Max(sum, ans);
    }

    return ans;
}

int main(void)
{
    int A[] = {3, -2, 5, -7, 9, 12};
    int sizeA = sizeof(A) / sizeof(A[0]);

    int B[] = {-3, -2, -5, -7, -9, -12};
    int sizeB = sizeof(B) / sizeof(B[0]);

    printf("Maximum subarray (1) : %d\n", MaxSumSubarray1(A, sizeA));
    printf("Maximum subarray (2) : %d\n", MaxSumSubarray2(B, sizeB));

    return 0;
}