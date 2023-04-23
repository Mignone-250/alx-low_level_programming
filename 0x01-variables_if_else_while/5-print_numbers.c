#include <stdio.h>

/**
 * main - a program that prints all single digits number of base 1
 * Return: 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
