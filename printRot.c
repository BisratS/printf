#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: input string
 * Return: return s
 */

int rot13(char *s)
{
	int i, j;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!normal[j])
			_putchar(s[i]);
	}

	return (i);
}

/**
 * printRot - Prints the rot13'ed string
 * @list: String to encoded
 *
 * Return: Length of the string encoded
 */

int printRot(va_list list)
{
	char *p;
	int len;

	p = va_arg(list, char *);
	len = rot13((p != NULL) ? p : "(ahyy)");

	return (len);
}
