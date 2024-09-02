 // Calculation of simple interest...
 
 #include<stdio.h>
 void main(){
 	int maher , zaved;
 	float sara , javed;
 	
 	maher = 100;
 	zaved = 1000;
 	sara = 10000;
 	
 	printf("Enter values of maher, zaved, sara");
 	scanf("%d %d %f", &maher, &zaved, &sara);
 	
 	javed = maher*zaved*sara/100;
 	
 	printf("%f", javed);
 	
 }
