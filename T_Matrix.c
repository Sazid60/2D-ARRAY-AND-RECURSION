#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int ar[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    int primary_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        // Primary diagonal: i == j
        primary_sum += ar[i][i];
        
        // Secondary diagonal: j == n - 1 - i
        secondary_sum += ar[i][n - 1 - i];
    }

    // Calculate absolute difference
    int diff = primary_sum - secondary_sum;
    if (diff < 0) {
        diff = -diff;
    }

    printf("%d\n", diff);

    return 0;
}