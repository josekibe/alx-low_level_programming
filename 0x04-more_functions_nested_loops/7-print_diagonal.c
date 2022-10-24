#include "main.h"

/**
 *print_diagonal - funtion that prints diogonal
 *@n: number of times to print
 *Return: void
 */
void print_diagonal(int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
