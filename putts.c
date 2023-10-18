#include "header.h"
/**
 * putts - write the character string
 * @txt: aurgument
 * Author: kelvin
 * Return: 0 if false, something else otherwise.
 */
int putts(char *txt)
{
        int X = 0, val_c = 0;

        if (txt)
        {
                while (txt[X] != '\0')
                {
                        putchers(txt[X]);
                        val_c += 1;
                        X++;
                }
        }
        return (val_c);
}
