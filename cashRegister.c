//  this program tells how much loonies, quators, dimes, nickels, pennies are to be paid back to customer
// after charging for a service...

#include <stdio.h>

int main(void)
{
	double amount=0.0, balance = 0.0, GST = 0.0;                   // initializing the variables..
	int Loonies=0, quarters=0, dimes=0, nickels=0, pennies=0;
	printf("Please enter the amount to be paid: $");
	scanf("%lf/n",&amount);
	GST = amount * 0.13 + 0.005;                      // calculating GST..
	amount = amount + GST;
	
	printf("GST: %.2lf\n",GST);
	printf("Balance owing: $%.2lf\n",amount);
	Loonies = amount/1;                               // Calculating number of loonies
	
	printf("Loonies required: %d,",Loonies);
	balance = amount - Loonies;
	
	printf(" balance owing $%.2lf\n",balance);
	quarters = balance/0.25;                         //Calculating number of quarters
	
	printf("Quarters required: %d,",quarters);
	balance = balance - 0.25*quarters;
	
	printf(" balance owing $%.2lf\n",balance);
	dimes = balance / 0.10;                          //Calculating number of dimes
	
	printf("Dimes required: %d,",dimes);
	balance = balance - 0.10*dimes;
	
	printf(" balance owing $%.2lf\n",balance);
	nickels = balance / 0.05;                        //Calculating number of nickels
	balance = balance - 0.05*nickels;
	
	printf("Nickels required: %d,",nickels);
	printf(" balance owing $%.2lf\n",balance);
	pennies = balance / 0.01 ;                        //Calculating number of pennies
	balance = balance - 0.01*pennies;
	
	printf("Pennies required: %d,",pennies);
	printf(" balance owing $%.2lf\n",balance);
	return 0;

}
