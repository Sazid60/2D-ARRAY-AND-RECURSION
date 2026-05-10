#include <stdio.h>

void print_nums(int n)
{
    if (n == 0)
        return;
    print_nums(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_nums(n);
    return 0;
}