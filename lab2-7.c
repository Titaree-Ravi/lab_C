#include <stdio.h>
int main (){
    char first_name[30];
    char last_name[30];
    int id;
    int dd, mm, yy;
    float gpa;
    scanf("%30s %30s %8d %d/%d/%d %f", first_name, last_name, &id, &dd, &mm, &yy, &gpa);
    printf("Fullname: %s %s\n", first_name, last_name);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%04d\n", dd, mm, yy);
    printf("GPA: %.2f", gpa);
    return 0;
}