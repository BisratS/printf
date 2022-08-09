#include "main.h"

/**
 * printOcta - Print octal
 * @list: Number to print
 *
 * Return: Octa
 */

int printOcta(va_list list)
{
	char buff;
	int size;

	buff = itoa(va_arg(list, unsigned int), 8);

	size = print((buff != NULL) ? buff : "NULL");

	return (size);
}
