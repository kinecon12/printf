#include "header.h"
/**
 * p_printf - formatted string text to stout
 *
 * @format: format specifier
 * Author: kingsley
 * Return: no of bytes printed
 */
int p_printf(const char *format, ...)
{
	va_list arggs;
	unsigned int Total = 0, k = 0, res;

	if (!format || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	va_start(arg, format);

	for ( ; format[k] != '\0'; k++)
	{
		if (format[k + 1] == 'c')
		{
			putchers(va_arg(arggs, int));
			k++;
		}
		else if (format[k] != '%')
		{
			putchers(format[k]);
		}
		else if (format[k + 1] == '%')
		{
			putchers('%');
			k++;
		}
		else if ((format[k + 1] == 'd') || (format[k + 1] == 'i'))
		{
			getc_ints(va_arg(arggs, int));
			k++;
		}
		else if (format[k + 1] == 's')
		{
			res = putts(va_arg(arggs, char *));
			k++;
			Total += (res - 1);
		}
		Total += 1;
	}
	va_end(arggs);
	return (Total);
}
