#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main ->  program that prints the alphabet in lowercase
 * followed by a new line
 * Return: always 0
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* 10 is ascii for newline*/

	return (0);
}
