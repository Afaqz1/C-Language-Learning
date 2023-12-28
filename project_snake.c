#include <stdio.h>
int snakewatergun(char you, char comp)
{

    if (you == char)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 's' && comp == 'w')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'w' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    comp = 's';
    printf("Enter's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    return 0;
}