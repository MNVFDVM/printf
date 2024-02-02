#include "main.h"
/**
 * print_exc_string - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_exc_string(va_list val)
{
	char *s;
	int j, l = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 32 || s[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			l = l + 2;
			value = s[j];
			if (value < 16)
			{
				_putchar('0');
				l++;
			}
			l = l + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[j]);
			l++;
		}
	}
	return (l);
}
