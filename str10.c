//Write a C program to read a matrix and find its largest and smallest elements.

#include <stdio.h>

int main()
{
    int a[10][10], i, j, r, c;
    int largest, smallest;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    largest = smallest = a[0][0];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] > largest)
            {
                largest = a[i][j];
            }

            if(a[i][j] < smallest)
            {
                smallest = a[i][j];
            }
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}

