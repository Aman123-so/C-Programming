// Counting number of digit in input value
#include<stdio.h>
void main(){
	long long int num; // Use long long int to handle larger numbers 
	int count = 0;
	// Take input by user
	printf("Enter a value :");
	scanf("%lld", &num); // Use %lld for long long int input
 // Count the digits
    while (num != 0) {
        num = num / 10;
        count++;
    }
	// print final count.
	printf("Number of digit :%d", count);
	}
