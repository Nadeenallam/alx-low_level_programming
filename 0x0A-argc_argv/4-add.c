#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 numbers
 * @argc: number of commandline arguments
 * @argv: pointer to an array of command line arguments
 * Return: Always 0 success
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
