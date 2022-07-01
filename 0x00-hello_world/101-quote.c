#include <stdio.h>
#include <unistd.h>

/**
 * main - startes the function that prints the quote
 *
 * followed by  NEW LINE TO THE standard error
 *
 * Return: always 0 (success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
