#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: rows.
 * Return: Nothing
*/

void print_chessboard(char (*a)[8]);
{
	int itrr, jtrr;

	for (itrr = 0; itrr < 8; itrr++)
	{
		for (jtrr = 0; jtr < 8; jtrr++)
		{
			_putchar(a[itrr][jtrr]);
		}
		_putchar('\n');
	}
}
