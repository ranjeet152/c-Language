// WAP to accept two values of a & b and swap their value..

#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, temp;
	printf("Enter  1st number:");
	scanf("%d", &a);
	printf("Enter 2nd number:");
	scanf("%d", &b);
	
	printf("\nBefore Swapping.. \n A = %d, B = %d", a,b);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter Swapping.. \n A = %d, B = %d", a,b);
}
