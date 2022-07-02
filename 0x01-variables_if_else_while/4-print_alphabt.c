#include <stdio.h>

/**
 * main -> program that prints the alphabet in lowercase
 * followed by a new line
 * return: always 0
*/

int main(void) /* program starts */
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);

	return (0);
}
