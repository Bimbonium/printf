#include <unistd.h>

/**
 * _putchar - writes the character supplied to it to stdout
 * @c: character supplied to the putchar function
 * Return: 1 on sucess
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
