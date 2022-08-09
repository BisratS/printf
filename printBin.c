#include "main.h"

/**
 * printBin -  unsigned int argument is converted to binary
 * @list: unsigned int input
 *
 * Return: binary
 */

int printBin(va_list list)
{
	char *buff;
	int size;

	buff = itoa(va_arg(list, unsigned int), 2);

	size = print(buff);

	return (size);
}
