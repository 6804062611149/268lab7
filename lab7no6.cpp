#include <stdio.h>

int main() {
    int M, N, i, j;
    int arr[20][20];
    int value = 100;

    do {
        printf("Enter M and N (2 < M,N < 20): ");
        scanf("%d %d", &M, &N);
    } while (M <= 2 || N <= 2 || M >= 20 || N >= 20 || M * N > 101);
    
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            arr[i][j] = value++;
        }
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
