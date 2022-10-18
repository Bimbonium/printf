#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct specifier - defines a structure for symbols and their functions
 * @sym: specifier symbol
 * @func: function to use the specifier with _putchar
 */

typedef struct specifier
{
	char *sym;
	int (*func)(va_list);

} specifier;


/* Main functions */

int _putchar (char c);
int _printf(const char *string, ...);

#endif /*MAIN_H*/
