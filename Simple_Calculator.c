#include<stdio.h>
#include<conio.h>
#include<math.h>

double division(double, double);
int modulus(int, int);
void print_menu();

int main(){
	int choice;
	double first, second, result;
	
	while(1) {
	 print_menu();
	scanf("%d", &choice);
	if(choice == 7) {
		break;
	}
	
	if (choice < 1 || choice > 7) {
		fprintf(stderr, "Invalid Menu Choice.");
		continue;
	}
	
	printf("\nPlese enter the first number:");
	scanf("%lf", &first);
	printf("\nNow enter the second number:");
	scanf("%lf", &second);
	
	switch(choice)
	{
		case 1:   // Add
		result = first + second;
			break;
			
		case 2:    // Subtract
		result = first - second;
			break;
			
		case 3:    // Multiply
		result = first * second;
			break;
			
		case 4:    // Divide
		result = division(first, second);
			break;
			
		case 5:    // Madulus
		result = modulus(first, second);
			break;
			
		case 6:    // Power
		result = pow(first, second);
			break;
	 
	}
	system("cls");
	printf("\nResult of operation is: %.2f", result);
	
	
   };
}

double division(double a, double b) {
	if (b == 0) {
		fprintf(stderr, "Invalid Argument for Divisin");
		return NAN;
	}else {
		return a / b;
	}
}

int modulus(int a, int b) {
	if (b == 0) {
		fprintf(stderr, "Invalid Argument for Modulus");
		return NAN;
	}else {
		return a % b;
	}
}

void print_menu() {
	printf("\n\n                Welcome to simple to calculator\n");
	printf("\n+---------------------------------------------------------+");
	printf("\n|                                                         |");
	printf("\n|            Welcome to                 |");
	printf("\n|                                                         |");
	printf("\n|                                                         |");
	printf("\n|                                                         |");
	printf("\n|                                                         |");
	printf("\n|         Choose one of the following options:            |");
	printf("\n|                                                         |");
	printf("\n|              1. Add                                     |");
	printf("\n|              2. Subtract                                |");
	printf("\n|              3. Multiply                                |");
	printf("\n|              4. Divide                                  |");
	printf("\n|              5. Modulus                                 |");
	printf("\n|              6. Power                                   |");
	printf("\n|              7. Exit                                    |");
	printf("\n|                                                         |");
	printf("\n|                                                         |");
	printf("\n+---------------------------------------------------------+");
	printf("\n\n              New, enter your choice:");
}




