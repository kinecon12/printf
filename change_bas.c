#include "main.h"
#include <stdio.h>
int chk_hex(int, char);

/**
 * bin_pr - num conervted from base10 to bin
 * Author: kingsley
 * @ls: List of args given to this function
 * Return: The length of the number printed
 */
int bin_pr(va_list ls)
{
	unsigned int number;
	int p, count;
	char *string;
	char *rev_str;

	number = va_arg(ls, unsigned int);
	if (number == 0)
		return (put_chars('0'));
	if (number < 1)
		return (-1);
	count = len_bas(number, 2);
	string = malloc(sizeof(char) * count + 1);
	if (string == NULL)
		return (-1);

	for (p = 0; number > 0; p++)
	{
		if (number % 2 == 0)
			string[p] = '0';
		else
			string[p] = '1';
		number = number / 2;
	}
	string[p] = '\0';
	rev_str = rev_string(string);
	if (rev_str == NULL)
		return (-1);
	show_bas(rev_str);
	free(string);
	free(rev_str);
	return (count);
}

/**
 * octal_pr -  numeric represent of a number printed  in octal base
 * Author: kingsley
 * @ls: showing of all the args passed to the program
 * Return: Number of symbols printed to stdout
 */
int octal_pr(va_list ls)
{
	unsigned int number;
	int count;
	char *rep_oct;
	char *rev_str;

	number = va_arg(ls, unsigned int);

	if (number == 0)
		return (put_chars('0'));
	if (number < 1)
		return (-1);
	count = len_bas(number, 8);

	rep_oct = malloc(sizeof(char) * count + 1);
	if (rep_oct == NULL)
		return (-1);
	for (count = 0; number > 0; count++)
	{
		rep_oct[count] = (number % 8) + 48;
		number = number / 8;

	}
	rep_oct[count] = '\0';
	rev_str = rev_string(rep_oct);
	if (rev_str == NULL)
		return (-1);

	show_bas(rev_str);
	free(rep_oct);
	free(rev_str);
	return (count);
}

/**
 * hex_pr - A represent of a decimal number print on base16 lowercase
 * Author: kingsley
 * @ls: List of the args passed to the function
 * Return: Number of characters printed
 */
int hex_pr(va_list ls)
{
	unsigned int number;
	int count;
	int num_rem;
	char *rep_hex;
	char *rev_hex;

	number = va_arg(ls, unsigned int);

	if (number == 0)
		return (put_chars('0'));
	if (number < 1)
		return (-1);
	count = len_bas(number, 16);
	rep_hex = malloc(sizeof(char) * count + 1);
	if (rep_hex == NULL)
		return (-1);
	for (count = 0; number > 0; count++)
	{
		num_rem = number % 16;
		if (num_rem > 9)
		{
			num_rem = chk_hex(rem_num, 'x');
			rep_hex[count] = num_rem;
		}
		else
			rep_hex[count] = num_rem + 48;
		number = number / 16;
	}
	rep_hex[count] = '\0';
	rev_hex = rev_string(rep_hex);
	if (rev_hex == NULL)
		return (-1);
	show_bas(rev_hex);
	free(rep_hex);
	free(rev_hex);
	return (count);
}


/**
 * hex_prr - A represent of a decimal number print on base16 Uppercase
 * Author: kingsley
 * @ls: List of the args passed to the function
 * Return: Number of characters printed
 */
int hex_prr(va_list ls)
{
	unsigned int number;
	int count;
	int num_rem;
	char *rep_hex;
	char *rev_hex;

	number = va_arg(ls, unsigned int);

	if (number == 0)
		return (put_chars('0'));
	if (number < 1)
		return (-1);
	count = len_bas(number, 16);
	rep_hex = malloc(sizeof(char) * count + 1);
	if (rep_hex == NULL)
		return (-1);
	for (count = 0; number > 0; count++)
	{
		num_rem = number % 16;
		if (num_rem > 9)
		{
			num_rem = chk_hex(num_rem, 'X');
			rep_hex[count] = num_rem;
		}
		else
			rep_hex[count] = num_rem + 48;
		number = number / 16;
	}
	rep_hex[count] = '\0';
	rev_hex = rev_string(rep_hex);
	if (rev_hex == NULL)
		return (-1);
	show_bas(rev_hex);
	free(rep_hex);
	free(rev_hex);
	return (count);
}

/**
 * chk_hex - this Chks hex function is calling it
 * Author: kingsley
 * @number: Number to convert into letter
 * @s: which hex function is calling it
 * Return: Ascii value for a letter
 */
int chk_hex(int num, char s)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	number = number - 10;
	if (s == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
