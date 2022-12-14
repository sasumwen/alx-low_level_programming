#include "main.h"

/**
 * _isalpha -> checks if the character is lowercase
 * int c -> checks that c is an intvalue
 * @c: is declared globally as a function
 * Return: returns either 1 or 0 depending on the condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
