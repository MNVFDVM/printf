#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
	int f = 0;
	int c = 0;
	int j, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((a << (31 - j)) & num);
		if (p >> (31 - j))
			f = 1;
		if (f)
		{
			b = p >> (31 - j);
			_putchar(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
