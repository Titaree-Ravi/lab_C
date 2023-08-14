#include <stdio.h>
int main(){
    char st[2];
    char nd[2];
    char th[2];
    char fr[2];
    char fv[2];
    scanf("%s%s%s%s%s", &st, &nd, &th, &fr, &fv);
    printf("%c\n", st[0]+1);
    printf("%c\n", nd[0]);
    printf("%c\n", th[0]+1);
    printf("%c\n", fr[0]);
    printf("%c\n", fv[0]+1);
    return 0;
}