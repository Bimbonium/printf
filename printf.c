#include "main.h"

/**
 *_printf - receives the main string and parameters
 * then prints the formated string
 * @string: string containing everything to be printed
 * Return: A count of the characters printed
 */

int _printf(const char *string, ...)
{
	int printed_char;
	specifier func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};

	va_list arg_list; /*initialise arg list*/

	if (string == NULL)
		return (-1);

	va_start(arg_list, string); /*first optional parameter*/
	printed_char = parser(string, func_list, arg_list);
	va_end(arg_list);
	return (printed_char);
}
