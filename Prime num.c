// WAP to input a number and check whether it is a prime or not prime..

#include<stdio.h>
void main(){
	int a=2,b, i=0;
	scanf("%d",&b);
	while(a<b){
		if(b%a==0){
			i = 1;
			break;
			
		}
		a++;
	}
	if(i==1){
		printf(" Not Prime No.");
	}
	else{
		printf(" Prime No.");
	}
}
