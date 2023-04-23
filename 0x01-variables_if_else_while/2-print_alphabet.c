#include <stdio.h>

/**
 * main - a program that prints alphabet in lowercase letter
 * Return: 0 (success)
 */

int main(void)
{
	char lalphabets;

	for (lalphabets = 'a'; lalphabets < 'z'; lalphabets++)
	{
		putchar(lalphabets);
	}
	putchar('\n');
	return (0);
}
