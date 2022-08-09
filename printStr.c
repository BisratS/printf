#include "main.h"

/**
 * printStr - Print string
 * @list: aegument
 *
 * Return: string length
 */

int printStr(va_list list)
{
	char *i;
	int len;

	i = va_arg(list, char*);
	len = print((i != NULL) ? i : "(null)");

	return (len);
}
