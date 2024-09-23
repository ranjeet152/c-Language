//WAP to working program............

#include<stdio.h>

void main(){
	int i, n;
	
	printf("find the value:");
	scanf("%d",&n);
	printf("Printing The table of %d.....\n",n);
	for (i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
	
}
