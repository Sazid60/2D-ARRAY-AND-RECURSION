#include <stdio.h>
int rec(char str[], int index)
{
    if (str[index] == '\0')
    {
        return 0;
    }
    int cnt = rec(str, index + 1);
    char ch = str[index];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return cnt + 1;  
    }else{
        return cnt;
    }
}   

int main()
{
    char str[201];
    fgets(str, 201, stdin);
    printf("%d\n", rec(str, 0));
    return 0;
}