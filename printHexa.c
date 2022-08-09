#include "main.h"

/**
 * printHexUpp - Print a number in upper hexadecimal format
 * @list: input number
 *
 * Return: number in upper hexa
 */
int printHexUpp(va_list list)
{
	char *buff;
	int size;

	buff = itoa(va_arg(list, unsigned int), 16);
	buff = strtoUpper(buff);

	size = print((buff != NULL) ? buff : "NULL");

	return (size);
}

/**
 * printHexLow - Print a number in lower hexadecimal format
 * @list: input number
 *
 * Return: number in lower hexa
 */
int printHexLow(va_list list)
{
	char *buff;
	int size;

	buff = itoa(va_arg(list, unsigned int), 16);

	size = print((buff != NULL) ? buff : "NULL");

	return (size);
}
