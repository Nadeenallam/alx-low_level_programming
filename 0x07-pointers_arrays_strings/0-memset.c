#include "main.h"

/**
 * *_memset - fiils memory with a constant byte.
 * @s: pointer to  put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itrr;

	for (itrr = 0; n > 0; itrr++, n--)
	{
		s[itrr] = b;
	}

	return (s);
}
