#include "main.h"

/**
 * print_c - A function that prints a char
 * @c: character to print
 * Return: Always 1 (Success)
 */
int print_c(va_list c)
{
<<<<<<< HEAD
char character = (char)va_arg(c, int);

_putchar(character);
return (1);
=======
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
>>>>>>> 8b715443d907b84ed1113fc5e56b09a618bcc42a
}
