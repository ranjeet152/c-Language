// WAP to swap two number using 2 var..

# include<stdio.h>

void main(){
    int a=10, b=20;
    printf("Before saping: %d %d", &a,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After Swaping:", a,b);

}