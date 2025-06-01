#include <stdio.h>

int main() {
    int arr[100], n;
    int *p = &arr;
    int largest, second;

    printf("Enter number of elements: \n");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    largest = second = *p;  
    for (int i = 1; i < n; i++) {
        if (*(p + i) > largest) {
            second = largest;
            largest = *(p + i);
        } 
        else if (*(p + i) > second && *(p + i) != largest) {
            second = *(p + i);
        }
    }

    printf("Second largest element is: %d ", second);
}
