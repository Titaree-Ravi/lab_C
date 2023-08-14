#include <stdio.h>

int main() {
    int id;
    char i_id_c[7];
    scanf("%d", &id);
    sprintf(i_id_c, "%d", id);
    printf("%-80.1c", i_id_c[0], 80);
    printf("%2c%-78.1c", i_id_c[0], i_id_c[1],80);
    printf("%3c%c%-76.1c", i_id_c[0],i_id_c[1], i_id_c[2],80);
    printf("%4c%c%c%-74.1c", i_id_c[0],i_id_c[1], i_id_c[2], i_id_c[3],80);
    printf("%5c%c%c%c%-72.1c", i_id_c[0], i_id_c[1], i_id_c[2], i_id_c[3],i_id_c[4],80);
    return 0;
}


    *
   ***
  * * *
 *  *  *
*   *   *
    *
    *
    *    
   ***   
  * * *  
 *  *  * 
*   *   *
    *
    *