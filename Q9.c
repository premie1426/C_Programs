#include <stdio.h>

int main() {
    int m[3][3], i, j;
    int sum = 0,d1 = 0,d2 = 0;

    printf("Enter the elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nThe 4x4 matrix is:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d", m[i][j]);
         sum += m[i][j];
            if (i == j) {
                d1 += m[i][j];
            }
            if (i + j == 3) {
                d2 += m[i][j];
            }
        }
        printf("\n");
    }

    printf("Sum of all elements: %d \n", sum);
    printf("Sum of main diagonal: %d \n", d1);
    printf("Sum of secondary diagonal: %d", d2);
}
