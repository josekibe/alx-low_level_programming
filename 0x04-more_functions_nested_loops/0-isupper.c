#include <stdio.h>
#include "main.h"

/**
 *_isupper - funtions that check for upper
 *@c: value to check if uppercase
 *Return: 1 if c is uppercase o if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
