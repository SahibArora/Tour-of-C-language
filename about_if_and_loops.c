// using of if else statements and looping..

#include<stdio.h>
#include<conio.h>

int main()
{ 
	int a, b, i = 0;
	printf("Enter two numbers, you want to compare: ");
	scanf("%d %d", &a,&b);
	if (a > b)                          // if will check the condoition and run accordingly..
	{
		printf("a with value %d is greater...\n", a);
	}
	else if(b > a)
	{
		printf("b with value %d is greater...\n", b);
	}
	else
	{
		printf("both numbers are equal...\n");
	}
	printf("printing numbers from 1 to 10..\n");
    // loop helps to run a command continously till the condition is not false..
	// three different sort of loops	
	// all the loops are constructed soo to print numbers from 0 to 9;
	while (i < 10)        // this loop only checks the condition and start only if the condition is true..       
	{
		printf("%d\n", i);
		i++;
	}
	/*do              // this kind of loops runs once does not matter if the condtion is true or not..
	{
		printf("%d\n", i);
		i++;
	} while (i < 10);*/

	/*for (i = 0; i < 10; i++)        // this loop checks the condition as well as increment the variable..: 
	{
		printf("%d\n", i);
		i++;
	}*/

	return 0;      
}