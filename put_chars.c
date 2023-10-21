#include "main.h"

/**
 * put_chars - writes the character c to stdout
 * Author: kingsley
 * @k: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int put_chars(char k)
{
        return (write(1, &k, 1));
}
