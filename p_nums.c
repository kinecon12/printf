#include "main.h"

/**
 * nums_pr - prints numbs send to function
 * Authro: kingsley
 * @args: List of args passed
 * Return: The number of arguments printed
 */
int nums_pr(va_list args)
{
	int num;
	int divide;
	int length;
	unsigned int nums;

	num  = va_arg(args, int);
	divide = 1;
	length = 0;

	if (num < 0)
	{
		length += put_chars('-');
		nums = num * -1;
	}
	else
		nums = num;

	for (; nums / divide > 9; )
		divide *= 10;

	for (; divide != 0; )
	{
		length += put__chars('0' + nums / divide);
		nums %= divide;
		divide /= 10;
	}

	return (length);
}
/**
 * unsgined_numpr - An unsigned num print
 * Author: kingsley
 * @num: unsigned integer to be printed stdout
 * Return: The amount of numbers printed
 */
int unsgined_numpr(unsigned int num)
{
	int divide;
	int length;
	unsigned int nums;

	divide = 1;
	length = 0;

	nums = num;

	for (; nums / divide > 9; )
		divide *= 10;

	for (; divide != 0; )
	{
		length += put_chars('0' + nums / divide);
		nums %= divide;
		divide /= 10;
	}

	return (length);
}
