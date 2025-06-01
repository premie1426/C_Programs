#include <stdio.h> 

int main(){
    int a,b,c,sum,prime=1;

    printf("Enter the three integers: \n");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("The sum is: %d \n", sum);

    if (sum % 2 == 0){
        printf("The sum is even.\n");
    }
    else{
        printf("The sum is odd.\n");
    }

    if (sum <= 1) {
        printf("The number is neither prime nor composite\n");
    } else {
        for (int i = 2; i * i <= sum; i++) {
            if (sum % i == 0) {
                prime = 0;
                break;
            }
        } 
    }

    if (prime){
        printf("The number is prime \n");
    }
    else{
        printf("The number is composite \n");
    }
    
}