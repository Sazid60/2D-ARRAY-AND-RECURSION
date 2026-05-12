#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int ar[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    // check if it's a zero matrix
    int total_val = r * c;
    int zero_count = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (ar[i][j] == 0)
            {
                zero_count++;
            }
        }
    }
    if (zero_count == total_val)
    {
        printf("This is a zero matrix\n");
    }
    else
    {
        printf("This is not a zero matrix\n");
    }
    return 0;
}