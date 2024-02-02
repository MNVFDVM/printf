#include "main.h"

/**
 * print_hex - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_hex(va_list val)
{
	int j;
	int *array;
	int c = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		c++;
	}
	c++;
	array = malloc(c * sizeof(int));

	for (j = 0; j < c; j++)
	{
		array[j] = tem % 16;
		tem /= 16;
	}
	for (j = c - 1; j >= 0; j--)
	{
		if (array[j] > 9)
			array[j] = array[j] + 39;
		_putchar(array[j] + '0');
	}
	free(array);
	return (c);
}
