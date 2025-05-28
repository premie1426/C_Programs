#include <stdio.h> 

int main(){
    int arr[100],n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the array of integers \n");
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The entered array is: ");
    for(int j = 0;j<n;j++){
        printf("%d ",arr[j]);
    }
}