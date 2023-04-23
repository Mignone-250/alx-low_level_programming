 #include <stdio.h>

/**
 * main - a program that prints all single digits number of base 10
 * Return: 0 (success)
 */

int main(void)
{
int digit;

for (digit = 0 ; digit < 10; digit++)
{
putchar((digit % 10) + '0');
}
printf("\n");
return (0);
}

