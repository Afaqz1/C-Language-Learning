# include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
    facebook[0].code = 101;
    facebook[0].salary = 23423.2342;
    strcpy(facebook[0].name, "Rohan");
    print("Done");
    return 0;
}
