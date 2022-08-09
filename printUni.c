#include "main.c"

/**
 * printUni - Print a unsigned int
 * @list: Number to print
 *
 * Return; unsigned int
 *
 */

printUni(va_list list)
{
	char *buff;
	int size;

	buff = itoa(va_arg(list, unsigned int), 10);

	size = print((buff != NULL) ? buff : "NULL");

	return (size);
}
