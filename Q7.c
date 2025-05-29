#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr = arr;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    largest = secondLargest = *ptr;  
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            secondLargest = largest;
            largest = *(ptr + i);
        } else if (*(ptr + i) > secondLargest && *(ptr + i) != largest) {
            secondLargest = *(ptr + i);
        }
    }

    printf("Second largest element is: %d\n", secondLargest);
}
