#include <stdio.h>

int main()
{
    int marks[5];

    for (int i; i < 5; i++)
    {
        printf("Enter The value of marks  for students %d: ", i + 1);
        scanf("%d", &marks[i]);
        printf("The value of %d is %d\n", marks[i]);
    }
    return 0;
}