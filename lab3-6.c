#include <stdio.h>
#include <math.h>
int main(){
    float price, diameter, height;
    scanf("%f%f%f", &price, &diameter, &height);
    float v = height*3.14159265359*pow(diameter/2,2);
    printf("Volume : %.2fml\n", v);
    printf("Baht/ml : %.4f", price/v);
}