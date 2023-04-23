#include <stdio.h>

/**
 * main - a program that prints numbers of base 16
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	char al;

	for (num = 0; num < 10 ; num++)
	{
		putchar((num % 10) + '0');
	}
	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}

