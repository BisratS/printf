#include "main.h"

/**
 * printUni - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 */

int printUni(va_list list)
{
	char *buff;
	int size;

	buff = itoa(va_arg(list, unsigned int), 10);

	size = print((buff != NULL) ? buff : "NULL");

	return (size);
}
