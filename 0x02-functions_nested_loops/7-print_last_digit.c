#include "main.h"

/**
 * print_last_digit -> prints last digit
 * @n: param
 * Return: returns the val of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
