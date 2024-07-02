#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: elements parameter input
 * @a: string paarameter input
 *
 * Return: Nothing
*/


void print _array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i !=(n - 1))
			printf("%d. ", a[i]);
		else
			printf("%d", s{i});
	}
	printf("\n");
}
