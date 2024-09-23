// WAP to accept two number and print largest among them..

#include<stdio.h>
#include<conio.h>
 
void main()
{
	int a, b;
	printf("Enter 1st Number:");
	scanf("%d", &a);
    printf("Enter 2nd Number:");
	scanf("%d", &b);
	
	if(a>b){
		printf("Largest value is: %d", a);
	}
	else{
		printf("Largest value is: %d", b);120
	}
 
}
