#include "main.h"

/**
 * print_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int print_oct(va_list val)
{
	int j;
	int *array;
	int c = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		c++;
	}
	c++;
	array = malloc(c * sizeof(int));

	for (j = 0; j < c; j++)
	{
		array[j] = tem % 8;
		tem /= 8;
	}
	for (j = c - 1; j >= 0; j--)
	{
		_putchar(array[j] + '0');
	}
	free(array);
	return (c);
}
