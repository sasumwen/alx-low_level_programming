#include <stdio.h>

/**
 * main - Print all possible combinations of single digitnumbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	putchar(number + '0');
	if (number < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

return (0);
}
