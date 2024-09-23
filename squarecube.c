// WAP to accept a number from user and print it's Square & Cube..

#include<stdio.h>
#include<conio.h>

void main()
{
	int n, sqre, cube;
	printf("Enter Number:");
	scanf("%d", &n);
	sqre = n*n;
	cube = n*n*n;
	printf("\nSquare: %d \nCube: %d", sqre, cube);
}
