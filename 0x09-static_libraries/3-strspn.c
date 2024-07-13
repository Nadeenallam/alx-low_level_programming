#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int itrr, jtrr;

	for (itrr = 0; s[itrr] != '\0'; itrr++)
	{
		for (jtrr = 0; accept[jtrr] != s[itrr]; jtrr++)
		{
			if (accept[jtrr] == '\0')
				return (itrr);
		}
	}
	return (itrr);
}
