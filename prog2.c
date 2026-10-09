#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter mark of sub 1:");
	scanf("%d",&a);
	
	printf("enter mark of sub 2:");
	scanf("\n%d",&b);
	
	printf("enter mark of sub 3:");
	scanf("\n%d",&c);
	
	d=a+b+c;
	printf("Total:%d",d);
	printf("\navg:%d",d/3);
	
	return 0;
}
	
	 
