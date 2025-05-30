#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    ptr = arr;
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n - 1; i += 2) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 1);
        *(ptr + i + 1) = temp;
    }

    printf("Array after swapping adjacent elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
