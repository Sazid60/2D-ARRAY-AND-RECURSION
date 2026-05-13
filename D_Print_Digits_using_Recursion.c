#include <stdio.h>

void recursive_print(long long n)
{
    if (n == 0)
    {
        return;
    }

    recursive_print(n / 10);
    printf("%lld ", n % 10);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long n;
        scanf("%lld", &n);

        if (n == 0)
        {
            printf("0");
        }
        else
        {
            recursive_print(n);
        }

        printf("\n");
    }

    return 0;
}