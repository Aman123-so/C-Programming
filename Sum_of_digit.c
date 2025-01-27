// calculating the sum of the digits of a number entered by the user
#include<stdio.h>
void main(){
    int num , sum = 0,d;
	// take user input
	printf("Enter a value :");
	scanf("%d", &num);
	// Loop to calculate the sum of digits
	while(num>0){
	   d = num % 10; // Extract the last digit
        sum += d;     // Add the digit to the sum
        num /= 10;        // Remove the last digi
}
// Print the result
    printf("Sum of digits is: %d\n", sum);
}
