#include <stdio.h>

void print_even_reverse(int arr[], int n, int index)
{
    if (index == n)
    {
        return;
    }

    print_even_reverse(arr, n, index + 1);

    if (index % 2 == 0)
    {
        printf("%d ", arr[index]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_even_reverse(arr, n, 0);

    return 0;
}