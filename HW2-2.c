#include <stdio.h>

int main() {
    int id;
    char i_id_c[7];
    scanf("%d", &id);
    sprintf(i_id_c, "%d", id);
    char mai[7];
    mai[0] = i_id_c[2];
    mai[1] = i_id_c[3];
    mai[2] = i_id_c[4];
    mai[3] = i_id_c[0];
    mai[4] = i_id_c[1];
    mai[5] = '\0';
    int show_id;
    sscanf(mai, "%d", &show_id);
    printf("%d", show_id);
    return 0;
}