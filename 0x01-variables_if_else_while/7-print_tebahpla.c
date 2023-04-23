#include <stdio.h>

/**
 * main - a program that prints alphabet in lowercase in reverse
 * Return: 0 (success)
 */

int main(void)
{
char lalphabets;

for (lalphabets = 'z'; lalphabets <= 'a'; lalphabets--)
putchar(lalphabets);
putchar('\n');
return (0);
}

