//Write a C program to read two integers and display their sum,difference,product,quotient and remainder.

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d\n%d",&a,&b);
	printf("\nSum : %d\ndifference : %d\nproduct : %d\nquotient : %d\nremainder : %d",a+b,a-b,a*b,a/b,a%b);
	return 0;
}


