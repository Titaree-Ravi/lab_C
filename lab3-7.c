#include <stdio.h>
int main(){
    float price, per_sale;
    int num;
    scanf("%f%f%d", &price, &per_sale, &num);
    printf("%.2f", (price-(price*per_sale/100))*num);
    return 0;
}