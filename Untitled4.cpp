//WAP to find is print division..

#include<stdio.h>

int main()
{ 
    int per;
    printf("find the division:");
    scanf("%d", &per);
    if(per>=60){
        printf("First division");
    }
    else{
        if(per>=50 && per <60){
            printf("Second division");
        }
        else{
            if(per>=40 && per<50){
                printf("Third division");
            }
            else{
                printf("Faill");
            }
        }
    }
}
