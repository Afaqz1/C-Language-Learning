# include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.salary = 34.34;
    e1.code = 100;
    strcpy(e1.name, "Afaq");

    printf("%d\n", e1.code);
    printf("%s\n", e1.name);
    printf("%f\n", e1.salary);
    struct employee e2, e3, e4;
    return 0;
}
