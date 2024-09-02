#include<stdio.h>

void main()
{
	int a, b, c, q;
	printf("\n Enter the cost price and selling price:");
	scanf("%d,%d", &a, &b);
	c = b-a;
	q = a-b;
	if(c>0)
	printf("The Seller mode a profit of Rs. %d\n",c);
	if(q>0)
	printf("The Seller incurred loss of Rs. %d\n",q);
	if(c==0)
	printf("There is on loss, on\n");
}
