#include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Dpnf!up!uijt!Sppn";
    decrypt(c);
    printf("Encrypted string is: %s", c);
    return 0;
}