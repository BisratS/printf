#include "main.h"

/**
 * _putchar - print character
 * @c: input
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}

/**
 * buff - save char to a buffer
 * @c: char
 *
 * Return: 1
 */

int buff(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}
