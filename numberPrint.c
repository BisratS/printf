#include "main.h"

/**
 * printInt - print integer
 * @list: argument
 *
 * Return: size
 */

int printInt(va_list list)
{
	char *intP;
	int size;

	intP = itoa(va_arg(list, int), 10);

	size = print((intP != NULL) ? intP : "NULL");

	return (size);
}
