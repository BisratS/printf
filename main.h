#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
char *itoa(long int num, int base);
int _printf(const char *format, ...);
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);
int print(char *str);
int _strlen(const char *str);

int printInt(va_list list);

/**
 *  * struct _format - Typedef struct
 *   *
 *    * @type: Format
 *     * @f: The function associated
 *      **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif

