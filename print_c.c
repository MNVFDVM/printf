#include "main.h"

/**
 * print_c - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int print_c(va_list val)
{
	char h;

	h = va_arg(val, int);
	_putchar(h);
	return (1);
}
