// this program tells the highest and lowest temperature in past 5 lat days...

#include <stdio.h>
#define NUMS 3

int main(void)
{
	int highvalue[5], lowvalue[5], i, sum = 0, maximum = 0, day = 0, maximums = 0, days = 0;  // initializing the variables..
	double average;

	printf("---=== IPC Temperature Analyzer ===---\n");
	for (i = 1; i <= 4; i++)
	{
		printf("Enter the high value for day %d: ", i);         // reading the temperatures for 5 days... 
		scanf("%d", &highvalue[i]);
		printf("\n");

		printf("Enter the low value for day %d: ", i);
		scanf("%d", &lowvalue[i]);
		printf("\n");

		while (((highvalue[i] > 40 || highvalue[i] < -40) || (lowvalue[i] > 40 || lowvalue[i] < -40)) || (highvalue[i] < lowvalue[i]))   // checking the every possibility of falure according to our needs...
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");

			printf("Enter the high value for day %d: ", i);
			scanf("%d", &highvalue[i]);
			printf("\n");

			printf("Enter the low value for day %d: ", i);
			scanf("%d", &lowvalue[i]);
			printf("\n");
		}

		sum = sum + highvalue[i] + lowvalue[i];

		if (highvalue[i] > maximum)                  // checking if the the given temperature is maximum or not..
		{
			maximum = highvalue[i];
			day = i;
		}
		if (lowvalue[i] < maximums)
		{
			maximums = lowvalue[i];
			days = i;
		}
	}
	average = (double)sum / 8;               //    claculating the average of temperatures in  past 5 days...

	printf("The average (mean) temperature was: %.2lf\n", average);
	/*printf("\n");*/

	printf("The highest temperature was %d, on day %d\n", maximum, day);
	/* printf("\n");*/

	printf("The lowest temperature was %d, on day %d\n", maximums, days);
	printf("\n");
	return 0;
}
