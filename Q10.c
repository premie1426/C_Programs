#include <stdio.h>

void bubble(int a[], int n) {
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]) {
                int t = a[j]; 
                a[j] = a[j+1]; 
                a[j+1] = t;
            }
        }
    }
}

void selection(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++){
            if (a[j] < a[min]) {
                min = j;
            }
        }
        int t = a[i]; 
        a[i] = a[min];
        a[min] = t;
    }
}

int main() {
    int a[100], n, key, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter 1 for Bubble Sort or 2 for Selection Sort: ");
    scanf("%d", &choice);

    if (choice == 1) {
        bubble(a, n);
    }
    else if (choice == 2) {
        selection(a, n);
    }
    else { 
        printf("Invalid choice\n");
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, found = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        if (a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("Element not found");
    }
}
