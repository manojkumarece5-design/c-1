//Write a C program to count the number of characters in a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("Number of characters = %d", length);

    return 0;
}

