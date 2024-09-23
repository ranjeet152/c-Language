// WAP to a number and check whether the number is Positive, Negative or Zero..

#include<stdio.h>
#include<conio.h>
 
void main()
{
	int n;
	printf("Enter Number:");
	scanf("%d", &n);
    
	if(n>0){
		printf("Number is Positive");
	}else if(n<0)
	{
		printf("Number is Negative");
	}else
	{
		printf("Number is Zero");
	}
}
	
