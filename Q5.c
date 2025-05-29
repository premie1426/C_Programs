#include <stdio.h> 

int main(){
    int arr[100],n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the array of integers \n");
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The entered array is: \n");
    for(int j = 0;j<n;j++){
        printf("%d ",arr[j]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}