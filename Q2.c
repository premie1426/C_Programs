#include <stdio.h> 

int main(){
    int n,hours,min,sec;
    printf("Enter seconds: ");
    scanf("%d",&n);

    hours = n / 3600;
    min = (n % 3600) / 60;
    sec = (n % 3600) % 60;

    printf("%d hours, %d minutes and %d seconds\n", hours, min, sec);

}