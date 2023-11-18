#include "main.h"
/**
 *_printstring - function that print a string
 *@S: pointer to value of each simbol of string
 *Return: counter.
 */
int _printstring(char *S)
{
	int i = 0;

	while (*S != '\0')
	{
		_putchar(*S);
		S++;
		i++;
	}
	return (i);
}
