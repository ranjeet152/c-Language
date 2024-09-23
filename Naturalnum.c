
//WAP to find sum of first n natural number..

#include<stdio.h>
void main(){
	int c = 1, sum = 0, n = 7;
	while(c<=n){
		sum = sum+c;
		c = c+1;
	}
	printf("sum = %d", sum);
}
