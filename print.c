#include "main.h"

/**
 * print - print string
 * @str: input
 *
 * Return: return i
 */


int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
