#include "main.h"

/**
 * rever_pr - Calls a function to reverse and print a string
 * Author : kelvin
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */
int rever_pr(va_list arg)
{
	int length;
	char *string;
	char *point;

	string = va_arg(arg, char *);
	if (string == NULL)
		return (-1);
	point = rev_string(string);
	if (point == NULL)
		return (-1);
	for (length = 0; point[length] != '\0'; length++)
		put_chars(point[length]);
	free(point);
	return (length);
}

/**
 * Aot13 - Cons string to Aot13
 * Author: kingsley
 * @ls: string to be convert
 * Return: converted string as stdout
 */
int Aot13(va_list ls)
{
	int p;
	int x;
	char *string;
	char us[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char put[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	string = va_arg(ls, char *);
	if (string == NULL)
		return (-1);
	for (p = 0; string[p] != '\0'; p++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (string[p] == us[x])
			{
				put_chars(put[x]);
				break;
			}
		}
		if (x == 53)
			put_chars(string[p]);
	}
	return (p);
}
