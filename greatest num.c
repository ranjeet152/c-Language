// program to find greatest of three number using nested if...

#include<stdio.h>

void main(){
    int a=30 ,b=20 ,c=10;

    //program to find greatest of three number

    if(a>=b) {
        if (a>=c){
            printf("Greatest than is %d\n", a);
        }
        else{
           printf("Greatest than is % d\n", c);
        }
    }
    else{
            if (b>=c){
                printf("Greatest than is % d\n", b);
            }
            else{
                printf("Greatest than is % d\n", c);
            }
    }
}