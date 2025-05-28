#include <stdio.h> 

int main(){
    int n,bill;
    printf("Enter units:");
    scanf("%d",&n);

    if (n>=0 && n<=100){
        bill = n*5;
        printf("The total bill is %d",bill);
    }
    else if (n>=101 && n<=300){
        bill = (100*5 + (n-100)*8);
        printf("The total bill is %d",bill);
    }
    else if (n>=301){
        bill = (100*5 + 200*8 + (n-300)*10);
        printf("The total bill is %d",bill);
    }
    else{
        printf("Enter a valid number");
    }
}