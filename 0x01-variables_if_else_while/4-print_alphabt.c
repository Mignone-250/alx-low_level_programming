/**
 * main - a program that prints alphabet in lowercase letter except q and e
 * Return: 0 (success)
 */

int main(void)
{
char lalphabets;

for (lalphabets = 'a'; lalphabets <= 'z'; lalphabets++)
{
if(lalphabets != 'q' && lalphabets != 'e')
putchar(lalphabets);
}
putchar('\n');
return (0);
}

