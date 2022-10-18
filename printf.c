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
	specifier func_list = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list arg_list; /*initialise arg list*/

	if (format == NULL)
		return (-1);

	va_start(arg_list, string); /*first optional parameter*/
	printed_char = parser(string, func_list, arg_list);
	va_end(arg_list);
	return (printed_char);
}
