#include "main.h"

/**
 * printPoi - Print a number in hexadecimal format
 *  @list: Number to print
 *
 *  Return: Length of the number
 */

int printPoi(va_list list)
{
	char *buff;
	int size;

	buff = itoa(va_arg(list, unsigned long int), 16);

	if (!strCom(buff, "0"))
		return (print("(nil)"));

	size = print("0x");

	if (!strCom(buff, "-1"))
		size += print("ffffffffffffffff");
	else
		size += print(buff);

	return (size);
}
