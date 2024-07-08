#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept);
{
	int itrr, jtrr;
	char *p;

	itrr = 0;
	while (s[itrr] != '\0')
	{
		jtrr = 0;
		while (accept[jtrr] != '\0')
		{
			if (accept[jtrr] == s[itrr])
			{
				p = &s[itrr];
				return (p);
			}
			jtrr++;

		}
		itrr++;
	}

	return (0);
}
