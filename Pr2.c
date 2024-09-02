#include <stdio.h>

void main(){
	int i, y; 
	for(i=1;i<=3; i=i++){
		for(y=1;y<=3;y++)
		{
			if(i==1 || i==3 || y==1 || y==3)
			print("*");
		}
		printf("\n");
	}
}
