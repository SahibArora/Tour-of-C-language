#include<stdio.h>
#include<conio.h>

int main()
{ 
	int a, b, c;                          // making three variables of integer
	printf("Enter 1st number: ");
	scanf("%d", &a);                    // scanf is a function in c, which allows us to read data and store in variables.. 
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	c = a + b;               // adding a and b and storing them in c;
	printf("Sum of two numbers is: %d \n", c);         // printing value of c through %d (a format specifier)
	return 0;      
}