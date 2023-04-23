#include <stdio.h>

/**
 * main - a program that prints alphabet in lowercase and uppercase letter
 * Return: 0 (success)
 */

int main(void)
{
char lalphabets;

for (lalphabets = 'a'; lalphabets <= 'z'; lalphabets++)
putchar(lalphabets);
for (lalphabets = 'A'; lalphabets <= 'Z'; lalphabets++)
putchar(lalphabets);
putchar('\n');
return (0);
}
