#include "main.h"

/**
 * _is lowe - function to check if
 * character is lowercase
 *
 * @c: checks inputs of function
 *
 * Return: returns 1 if `c` is lowercase
 * otherwise always o (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
