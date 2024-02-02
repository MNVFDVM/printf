#include "main.h"
/**
 * print_i - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	int m, l = n % 10, digit, exp = 1;
	int  j = 1;

	n = n / 10;
	m = n;

	if (l < 0)
	{
		_putchar('-');
		m = -m;
		n = -n;
		l = -l;
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
	_putchar(l + '0');

	return (j);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_d(va_list args)
{
	int n = va_arg(args, int);
	int m, last = n % 10, digit;
	int  j = 1;
	int exp = 1;

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
