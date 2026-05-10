#include <stdio.h>

void print_nums(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d", n);

    if (n > 1)
    {
        printf(" ");
    }

    print_nums(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_nums(n);

    return 0;
}