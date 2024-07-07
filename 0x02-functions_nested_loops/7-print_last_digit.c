#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lasrDigit;

	if (n < 0)
		lasrDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
