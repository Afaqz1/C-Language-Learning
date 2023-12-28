#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("Area of the side is %f\n", pow(side, 2.0));

    return 0;
}