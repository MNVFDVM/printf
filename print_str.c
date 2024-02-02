#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int t;

	for (t = 0; s[t] != 0; t++)
		;
	return (t);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int t;

	for (t = 0; s[t] != 0; t++)
		;
	return (t);
}
