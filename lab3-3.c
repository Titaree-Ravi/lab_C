#include <stdio.h>
#include <math.h>
int main(){
    float a, b;
    scanf("%f%f", &a, &b);
    float c = sqrt(pow(a, 2) + pow(b, 2));
    printf("%.2f", c);
    return 0;
}