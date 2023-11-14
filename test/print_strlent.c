#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);
}
