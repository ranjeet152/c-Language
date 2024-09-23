// WAP to explain the working of arithmetic operators..
 
#include<stdio.h>
#include<conio.h>

void main () {
	int a, b, c;
	printf("Enter the first number in the arithmetic operators:");
	scanf("%d", &a);
	printf("Enter the second number in the arithmetic operators:");
	scanf("%d", &b);
	
	   // Addition....   
	c = a + b;
	printf("Addition two number: %d\n", c);
	
	   // Subtraction..
	c = a - b;
	printf("Subtraction two nuber: %d\n", c);
	
	  // Multipliction..
	c = a * b;
	printf("Multipliction two number: %d\n", c);
	
	   // Division..
	c = a / b;
	printf("Division two number: %d\n", c);
	
	  // Modulus...
	c = a % b;
	printf("Remainder when a divided by b = %d\n", c);
	
}
