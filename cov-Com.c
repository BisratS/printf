#include "main.h"

/**
 * isLowecase - Check if the character are in lowercase
 * @c: caracter to be compare
 *
 * Return: 1 0
 */
int isLowecase(char c)
{

	return (c >= 'a' && c <= 'z');

}

/**
 * strtoUpper - convert string to uppercase
 * @s: input string
 *
 * Return: string in uppercase
 */
char *strtoUpper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isLowecase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

/**
 * strCom - Compare two strings
 * @s1: String 1
 * @s2: String 2
 *
 *  Return: Always 1
 */

int strCom(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);

}
