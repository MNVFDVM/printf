#include "main.h"

/**
 * print_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int z;
	int j;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
		return (j);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	z = print_hex_extra(x);
	return (z + 2);
}
