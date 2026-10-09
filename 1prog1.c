#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	
	printf("enter b value:");
	scanf("%d",&b);
	
	printf("\nAddition:%d",a+b);
	printf("\nsubtraction:%d",a-b);
	printf("\nMultiplication:%d",a*b);
	printf("\nDivision:%d",a/b);
	printf("\nModule:%d",a%b);
	
	return 0;
}
