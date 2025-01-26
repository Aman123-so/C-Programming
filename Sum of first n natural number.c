//write a program to print sum first n natural no.
#include<stdio.h>
void main()
{
	int i;
	int num;
	int sum=0;
	// promote user input 
	printf("Enter a value:");
	scanf("%d",&num);
	
// Loop to calculate the sum of the first n natural numbers
	for( i=1; i<=num; i++){
		sum=sum+i;
        } 
	  // Print the result after the loop
	printf("sum of first %d  natural number is= %d\n",num , sum);
	}
	
	
	

