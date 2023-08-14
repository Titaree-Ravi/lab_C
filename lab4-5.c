
#include <stdio.h>

int main()
{
    char charac;
    scanf("%c", &charac);

    if (charac >= 65 && charac <= 90){
        printf("%c", charac + 32);
    }else if(charac >= 97 && charac <= 122){
        printf("%c", charac - 32);
    }else{
        printf("error");
    }
    return 0;
}
