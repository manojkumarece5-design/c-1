//Write a C program to convert a string into lowercase using an appropriate standard library function.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower((unsigned char)str[i]);
    }

    printf("Uppercase string: %s", str);

    return 0;
}
