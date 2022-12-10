#include <stdio.h>

/**
 * main -> print single digit numbers of base 10
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}
