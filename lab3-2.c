#include <stdio.h>
int main(){
    float n1, n2, n3, n4;
    scanf("%f%f%f%f",&n1, &n2, &n3, &n4);
    float all = n1+n2+n3+n4; 
    printf("Summation is %.2f\n", all);
    printf("Average is %.3f", all/4);
    return 0;
}
