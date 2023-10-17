#include "header.h"
/**
 * Function to print character string
 * Author: kelvin
 */
int putchers(char n)
{
	return (write(1, &n, 1));
}
