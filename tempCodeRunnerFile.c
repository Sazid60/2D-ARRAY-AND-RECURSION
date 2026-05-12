#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int r = n;
    int c = n;

    int ar[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;
    for (int i = 0; i < n; i++) {
        primary_diagonal_sum += ar[i][i];
        secondary_diagonal_sum += ar[i][n - 1 - i];
    }
    int diff = primary_diagonal_sum - secondary_diagonal_sum;
    if (diff < 0) diff = -diff;
    printf("%d\n", diff);
    return 0;
}