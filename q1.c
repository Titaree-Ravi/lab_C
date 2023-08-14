/*#include <stdio.h>

int main() {
    int a = 17, h=17, b = 25, e=25, c = 50, f=50, d = 10, g=10;
    printf("before d%d\n",d);
    printf("before g%d\n",g);
    -d++;
    printf("after d%d\n",d);
    -++g;
    printf("after g%d",g);
    return 0;
}*/

#include <stdio.h>

int main() {
    int a = 17, b = 25, c = 50,d = 10;
    d = b % a + c / b;
    
    printf("after a %d\n",a);
    printf("after b %d\n",b);
    printf("after c %d\n",c);
    printf("after d %d\n",d);

    d = b % a++ + c / b;

    printf("after a %d\n",a);
    printf("after b %d\n",b);
    printf("after c %d\n",c);
    printf("after d %d",d);

    d = b % ++a + c / b;
    
    printf("after a %d\n",a);
    printf("after b %d\n",b);
    printf("after c %d\n",c);
    printf("after d %d\n",d);

    d = b % (a + c) / b;

    printf("after a %d\n",a);
    printf("after b %d\n",b);
    printf("after c %d\n",c);
    printf("after d %d",d);
    return 0;
}