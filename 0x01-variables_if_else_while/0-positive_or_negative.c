#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main-Entry
* Description: prints if a number is positive or negative
* Return: 0
*/
void positive_or_negative(int i);
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if  (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
		else if (n < 0)
	{
			printf("%d is negative\n", n);
	}
	return (0);
}
