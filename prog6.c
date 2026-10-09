//Write a C program to read three numbers and calculate their average using appropiate data types.

#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d\n%d\n%d",&a,&b,&c);
	d=a+b+c;
	printf("%d",d/3);
	return 0;
}
