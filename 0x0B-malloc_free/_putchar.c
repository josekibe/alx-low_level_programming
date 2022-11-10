#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: chracter to print
 * return: on success 1 on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
