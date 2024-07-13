#include <stdio.h>

/**
 * main - print number of argument passed
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
