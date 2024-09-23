// WAP to accept value of radius and print area of a circle..

#include<stdio.h>
#include<conio.h>

void main(){
	float area, radius;
	printf("Enter Radius:");
	scanf("%f", &radius);
	
	area = 3.14*radius*radius;
	printf("Area of the given radius is: %6.2f",area);
}
