#include "main.h"

/**
 * swap_int - funtion that swaps values of two integers
 *@a: int a
 *@b: int b
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

