#include <stdio.h>

/**
 * main -> print numbers of base 16 in aplha
 * followed by new line
 * Return: always 0
 */

int main(void)
{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}
