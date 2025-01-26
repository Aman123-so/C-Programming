// Change character lowercase to uppercase 
#include<stdio.h>
void main(){
	char a;
	printf("Enter a character: ");
	scanf("%s",&a);
	if(a >='a' && a<='z')
	{
		a= a-32; //convert lowercase to uppercase
		printf("%c\n" , a);
		
	}
	 else if(a >='A' && a <= 'Z'){
		a = a +32; // convert uppercase to lowercase
		printf("%c\n" , a);
		
	}
	else
	{
		printf ("invalid choice");
		
	}
}
