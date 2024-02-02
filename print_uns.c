#include "main.h"
/**
 * print_unsigned - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int m, last = n % 10, digit, exp = 1;
	int  j = 1;

	n = n / 10;
	m = n;

	if (last < 0)
	{
		_putchar('-');
		m = -m;
		n = -n;
		last = -last;
		j++;
	}
	if (m > 0)
	{
		while (m / 10 != 0)
		{
			exp = exp * 10;
			m = m / 10;
		}
		m = n;
		while (exp > 0)
		{
			digit = m / exp;
			_putchar(digit + '0');
			m = m - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}
