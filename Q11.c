#include <stdio.h>

struct product{
    int id;
    char name[100];
    int quantity;
    float price;
};

int main(){
    int n=0,maxq=0,maxp=0;
    float total=0; 

    printf("Enter no of items: \n");
    scanf("%d",&n);

    struct product item[n];

    printf("Enter the details for all the items in order: ");
    for(int i = 0; i<n; i++){
        scanf("%d %s %d %f",&item[i].id, item[i].name, &item[i].quantity, &item[i].price );
    }

    for(int i = 0; i<n; i++){
        printf("%d %s %d %f \n",item[i].id, item[i].name, item[i].quantity, item[i].price);
    }

    for (int i = 0; i<n; i++){
        total += item[i].quantity*item[i].price;
    }
    printf("The total value is: %f \n",total);

     for (int i = 1; i < n; i++) {
        if (item[i].quantity > item[maxq].quantity) {
            maxq = i;
        }
        if (item[i].price > item[maxp].price) {
            maxp = i;
        }
    }

    printf("Product with highest quantity:\n");
    printf("id: %d, name: %s, quantity: %d, price: %f\n", item[maxq].id, item[maxq].name, item[maxq].quantity, item[maxq].price);

    printf("Product with highest price:\n");
    printf("id: %d, name: %s, quantity: %d, price: %f\n", item[maxp].id, item[maxp].name, item[maxp].quantity, item[maxp].price);
}