#include "header.h"

int putchers(char n)
{
	return write(1, &n, 1);
}
