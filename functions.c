// working with the functions...

#include<stdio.h>
#include<conio.h>
void sum();						// declaring sum (a non parameterized function) function...
void subtract(int a, int b);	// a parameterized function...
								// we always declare function before main...

int main()
{ 
	sum();                    // function sum (a non paramater function) called in the main..
	subtract(20,10);         // a parameterized function...
	return 0;      
}
              // we can either define functions before main or after main...
void sum()            // defining sum function
{ 
	int a, b, c;                       
	printf("Enter 1st number: ");
	scanf("%d", &a);                   
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	c = a + b;               
	printf("Sum of two numbers is: %d \n", c);       
	return 0;
}
void subtract(int a, int b)           // defining subtract function..
{
	int c;
	c = a - b;
	printf("after subtracting 1st number from 2nd, result is: %d \n", c);
}