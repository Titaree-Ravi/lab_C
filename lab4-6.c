
#include <stdio.h>
#include <ctype.h>

int main()
{
    char charac;
    scanf("%c", &charac);

    if (isupper(charac)){
        printf("uppercase");
    }else if(islower(charac)){
        printf("lowercase");
    }else if(isdigit(charac)){
        printf("number");
    }else{
        printf("error");
    }
    return 0;
}
