#include "main.h"

/**
 * _strchr - file memory with a constant byte.
 * @s: pointer to put thr constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int itrr;

	for (itrr = 0; s[itrr] >= '\0' ; itrr++)
	{
		if (s[itrr] == c)
		{
			return (s + itrr);
		}
	}
	return ('\0');
}
