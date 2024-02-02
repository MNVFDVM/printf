#include "main.h"
/**
 * print_s - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_s(va_list val)
{
	char *s;
	int j, l;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		l = _strlen(s);
		for (j = 0; j < l; j++)
			_putchar(s[j]);
		return (l);
	}
	else
	{
		l = _strlen(s);
		for (j = 0; j < l; j++)
			_putchar(s[j]);
		return (l);
	}
}
