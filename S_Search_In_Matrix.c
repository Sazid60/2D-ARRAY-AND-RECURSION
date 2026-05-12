#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d %d", &N, &M);

    int found = 0;
    int arr[N][M];

    // Input matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input X
    scanf("%d", &X);

    // Search X in matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(arr[i][j] == X) {
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    // Output
    if(found)
        printf("will not take number\n");
    else
        printf("will take number\n");

    return 0;
}