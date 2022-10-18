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

int _putchar (char);
int _printf(const char *string, ...);
int parser(const char *string, specifier func_list[], va_list arg_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);


unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif /*MAIN_H*/
