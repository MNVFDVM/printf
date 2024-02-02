#include "main.h"
/**
 * print_rot13 - convert to rot13
 * @args: printf arguments
 * Return: counter
 *
 */
int print_rot13(va_list args)
{
	int x, y, c = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
	{
		k = 0;
		for (y = 0; al[y] && !k; y++)
		{
			if (s[x] == al[y])
			{
				_putchar(bl[y]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[x]);
			c++;
		}
	}
	return (c);
}
