#include <stdio.h>
int main(){
    double width, length;
    scanf("%lf%lf", &width, &length);
    printf("Perimeter of rectangle = %.4lf units", (width*2)+(length*2));
    return 0;
}