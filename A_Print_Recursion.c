#include <stdio.h>
void print(int n)
{
    if (n == 0){
        return;
    }
    print(n - 1);
    printf("I love Recursion\n");
}   
int main()
{
    int n ;
    scanf("%d", &n);
    print(n);
    return 0;
}