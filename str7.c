//Write a C program to count the number of spaces in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    printf("Number of spaces = %d", count);

    return 0;
}


