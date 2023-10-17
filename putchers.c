#include "header.h"
/**
 * putchers - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int putchers(char n)
{
	return (write(1, &n, 1));
}
