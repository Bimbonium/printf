#include main.h

/**
 * print_char - function that prints char
 * @list: list of arguments
 * Return: returns amount of char printed
 */

int print_char(va_list list)
{
	_putchar (va_arg(list, int));
	return (1);
}

/**
 * print_string - function that prints a string of characters
 * @list: list of arguments
 * Return: returns amount of chars printed
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
