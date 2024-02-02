include "main.h"

/**
 * print_hex_extra - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int print_hex_extra(unsigned long int num)
{
	long int j;
	long int *array;
	long int c = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		c++;
	}
	c++;
	array = malloc(c * sizeof(long int));

	for (j = 0; j < c; j++)
	{
		array[j] = temp % 16;
		temp = temp / 16;
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
