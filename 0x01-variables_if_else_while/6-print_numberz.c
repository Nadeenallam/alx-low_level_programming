#include<stdio.h>

/**
 * main - Entry main
 *
 * Description: print 0-9 using putchar
 * while using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representstion*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
