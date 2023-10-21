#include "main.h"
/**
 * char_pr - Prints char string out
 * Author: Kingsley
 * @ls: list of args
 * Return: return the amt of characters printed.
 */
int char_pr(va_list ls)
{
	put_chars(va_arg(ls, int));
	return (1);
}

/**
 * strs_pr - Prints output of string
 * Author: kingsley
 * @ls: list of args
 * Return: After Exec return the amt of chars printed.
 */
int strs_pr(va_list ls)
{
	int p;
	char *strings;

	strings = va_arg(ls, char *);
	if (strings == NULL)
		str = "(null)";
	for (p = 0; str[p] != '\0'; p++)
		put_chars(str[p]);
	return (p);
}

/**
 * perc_pr - Prints a percent %  symbol
 * Author: kingsley
 * @ls: lists of args
 * Return: Give back  amount of characters printed.
 */
int perc_pr(__attribute__((unused))va_list ls)
{
	put_chars('%');
	return (1);
}

/**
 * inte_pr - Prints an integer value
 * Author: kingsley
 * @ls: list of args
 * Return: print back the amount of chars printed.
 */
int inte_pr(va_list ls)
{
	int no_len;

	no_len = print_number(ls);
	return (no_len);
}

/**
 * unsigned_intvalue - Prints Unsigned integers value
 * Aurthor: kingsley
 * @ls: List of all of the args
 * Return: a count of the nums
 */
int unsigned_intvalue(va_list ls)
{
	unsigned int digits;

	digits = va_arg(ls, unsigned int);

	if (digits == 0)
		return (unsgined_numpr(digits));

	if (digits < 1)
		return (-1);
	return (unsgined_numpr(digits));
}

