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
    // flag variable 
    int is_diagonal = 0;
    // check if it's a diagonal matrix
    if(r==c){ // 
    
        for(int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(i+j == r-1){
                    // inside diagonal
                }else{
                    // outside diagonal
                    if(ar[i][j] != 0){
                        // flag the matrix as not a diagonal matrix
                        is_diagonal = 1;
                        printf("This is not a secondary diagonal matrix\n");
                    }
                }
            }
        }
        if(is_diagonal == 0){
            printf("This is a secondary diagonal matrix\n");
        }
    }else{
        printf("This is not a secondary diagonal matrix\n");
    }
    return 0;
}