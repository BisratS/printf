#include "main.h"

/**
 * printRev - Print a string in reverse
 * @list: input string
 *
 * Return: reversed string
 */

int printRev(va_list list)
{
	int i, size;
	const char *str;

	str = va_arg(list, const char *);
	size = _strlen(str);

	for (i = size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (size);
}
