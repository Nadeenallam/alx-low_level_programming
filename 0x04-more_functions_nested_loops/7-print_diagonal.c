#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 * should be printed
*/

void print_diagonal(int n)
{
	int linenum, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (linenum = 1; linenum <= n; linenum++)
		{
			for (space = 1; space <= linenum; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
