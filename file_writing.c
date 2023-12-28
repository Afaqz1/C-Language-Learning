#include <stdio.h>

int main()
{
    FILE *fptr;
    int num = 45;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "The number is %d\n", num);
    fprintf(fptr, "Thanks for using fprintf", num);
    fclose(fptr);

    return 0;
}