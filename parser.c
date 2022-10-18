#include "main.h"

/**
 * parser - function to do all the heavy lifting, the iterator function
 * receives all parameters to the printf function and prints
 * a formated string as its output
 * @string: string containing string to be printed and specifiers
 * @func_list: a list of functions/specifier pairs that can be passed
 * @arg_list: a list of all arguments passed to the _printf function
 * Return: returns a count of the characters printed
 */

int parser(const char *string, specifier func_list[], va_list arg_list)
{
	int i, j, r_val, printed_char;

	printed_char = 0;
	for (i = 0; string[i] != '\0'; i++)
		/*move through the string one char at a time*/
	{
		if (string[i] == '%') /* temporary stop at a specifier*/
		{
			/*move through the struct to match the next char*/
			for (j = 0; func_list[j].sym != NULL; j++)
			{
				if (string[i + 1] == func_list[j].sym[0])
				{
					r_val = func_list[j].func(arg_list);
					if (r_val == -1)
						return (-1);
					printed_char += r_val;
					break;
				}
			}
			if (func_list[j].sym == NULL && string[i + 1] != ' ')
			{
				if (string[i + 1] != '\0')
				{
					_putchar(string[i]);
					_putchar(string[i + 1]);
					printed_char = printed_char + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*skip the character after % */
		}
		else
		{
			_putchar(string[i]);
			printed_char++;
		}
	}
	return (printed_char);
}
