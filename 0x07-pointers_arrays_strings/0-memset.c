#include "main.h"

/**
 * _memset - fills first n bytes
 * @s: pointer to memory fo filling
 * @c: char to filll mem with
 * @n:no. of bytyes to b e filled
 *Return: a pointer to he filled memory arears
 */
char *_memset(char *s, char c, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s{i] = c;
		n--;
	}
	return (s);
}
