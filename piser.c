#include "main.h"

/**
 * piser - Recis the main string & all the necessary paras to print
 * A formated string.
 * Author: kingsley
 * @format:  strs having all the nec  chars.
 * @f_list: A list of all the posible functions.
 * @args_ls: ls having  all the args given to the program.
 * Return: Sum count of the chars printed.
 */
int piser(const char *format, conver_t f_list[], va_list args_ls)
{
	int q, j, pival, chars_pr;

	chars_pr = 0;
	for (q = 0; format[q] != '\0'; q++)
	{
		if (format[q] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[q + 1] == f_list[j].sym[0])
				{
					pival = f_list[j].f(args_ls);
					if (pival == -1)
						return (-1);
					chars_pr += pival;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[q + 1] != ' ')
			{
				if (format[q + 1] != '\0')
				{
					put_chars(format[q]);
					put_chars(format[q + 1]);
					chars_pr = chars_pr + 2;
				}
				else
					return (-1);
			}
			q = q + 1;
		}
		else
		{
			put_chars(format[q]);
			chars_pr++;
		}
	}
	return (chars_pr);
}
