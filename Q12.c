#include <stdio.h>

int main() {
    int n, i, j, t;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(t = 1; t <= n - i; t++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

