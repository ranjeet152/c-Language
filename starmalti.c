// star se multipal krna...

 
 #include<stdio.h>
 
 void main()
 {
 	int row, col;
 	for(row=1; row<=10; row++)
 	{
 		for(col=1; col<=10; col++)
 		{
 			if((row==col) || ((row+col) == 10+1))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n");
	 }
 }
