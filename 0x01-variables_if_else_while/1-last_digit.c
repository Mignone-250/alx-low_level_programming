#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of a number stored in the variable
 * Return: 0 (success)
 *
 */

int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	if (lastdig > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n)", n, lastdig);
	}
	else if (lastdig == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastdig);
	}
	else
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
	}
	return (0);
}
