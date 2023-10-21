#include "main.h"
#include <stdio.h>

/**
 * str_rev - revers a str in place for excution
 * Author: kingsley
 *
 * @str: strs to revers parameter
 * Return: A pointer to a character
 */
char *str_rev(char *str)
{
	int length;
	int h;
	char t;
	char *d;

	for (length = 0; str[length] != '\0'; length++)
	{}

	d = malloc(sizeof(char) * length + 1);
	if (d == NULL)
		return (NULL);

	_memcpy(d, str, length);
	for (h = 0; h < length; h++, length--)
	{
		t = d[length - 1];
		d[length - 1] = d[h];
		d[h] = t;
	}
	return (d);
}

/**
 * show_bas - sends chars to show on standard output
 * Author: kingsley
 * @str: String to parse
 */
void show_bas(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
		put_chars(str[m]);
}

/**
 * len_bas - Cal the len for an octal number
 * Authro: kingsley
 * @numbers: The number for which the length is being calculated
 * @b: Base to be cal
 * Return: An integer representing the length of a number
 */
unsigned int len_bas(unsigned int numbers, int b)
{
	unsigned int y;

	for (y = 0; numbers > 0; y++)
	{
		numbers = numbers / b;
	}
	return (y);
}

/**
 * cpmom - function to copy memory area
 * Author: kingsley
 * @dest: Dest for copying from source
 * @src: Src to copy from to destination
 * @Nb: The num of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *cpmom(char *dest, char *src, unsigned int Nb)
{
	unsigned int p;

	for (p = 0; p < Nb; p++)
		dest[p] = src[p];
	dest[p] = '\0';
	return (dest);
}
