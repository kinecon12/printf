#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - This defines a structure for symbols
* And functions to be executed
* Author: kingsley
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Function for main execution*/
int piser(const char *format, conver_t f_list[], va_list args_ls);
int _printf(const char *format, ...);
int put_chars(char);
int char_pr(va_list);
int strs_pr(va_list);
int perc_pr(va_list);
int inte_pr(va_list);
int nums_pr(va_list);
int bin_pr(va_list);
int rever_pr(va_list arg);
int Aot13(va_list);
int unsigned_intevalue(va_list);
int octal_pr(va_list ls);
int hex_pr(va_list list);
int hex_prr(va_list list);
unsigned int len_bas(unsigned int, int);
char *str_rev(char *);
void show_bas(char *str);
char *cpmom(char *dest, char *src, unsigned int n);
int unsgined_numpr(unsigned int);


#endif
