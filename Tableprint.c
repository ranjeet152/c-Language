// WAP to print the 1 to 50 in a table....

#include<stdio.h>

void main(){
	int i,y;
	for(i=1;i<=50;i++)  // row
	{
		for(y=1;y<=i;y++)  // columns
		{
			printf("%d",y);
		}
		printf("\n");
	}
	
}
