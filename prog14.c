//find the number is prime number or not?

#include<stdio.h>
int main()
{ 
	int a;
	scanf("%d",&a);
	
	if (a%a==0 && a%2!=0 && a%3!=0 && a%5!=0){
		printf("%d is prime number",a);
		}
	else
		printf("not a prime");
	return 0;
}
	
