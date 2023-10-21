#include "main.h"

/**
 * _printf - Main string and all the necessary parameters is being recieved
 * print a formated string
 * Author: kingssley
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
        int outputp_chars;
        conver_t f_list[] = {
                {"c", char_pr},
                {"s", strs_pr},
                {"%", perc_pr},
                {"d", inte_pr},
                {"i", inte_pr},
                {"b", bin_pr},
                {"r", rever_pr},
                {"R", Aot13},
                {"u", unsigned_intevalue},
                {"o", octal_pr},
                {"x", hex_pr},
                {"X", hex_prr},
                {NULL, NULL}
        };
        va_list args_ls;

        if (format == NULL)
                return (-1);

        va_start(args_ls, format);
        /*Calling parser to our function*/
        outputp_chars = parser(format, f_list, args_ls);
        va_end(args_ls);
        return (outputp_chars);
}
