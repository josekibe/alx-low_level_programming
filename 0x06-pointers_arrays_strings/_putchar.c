#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 *@c: character to print
 *Return: on success 1, on error -1 and error set approprietly
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
