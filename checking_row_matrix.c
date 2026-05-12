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
    if(r ==1){
        printf("This is a row matrix\n");
    }else{
        printf("This is not a row matrix\n");
    }
    return 0;
}