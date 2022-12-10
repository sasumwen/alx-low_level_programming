#include <stdio.h>

/**
 * main -> program that prints lower case alphabets in reverse
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}

