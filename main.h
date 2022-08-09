#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/* Supporting functions*/
int _putchar(char c);
char *itoa(long int num, int base);
int _printf(const char *format, ...);
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);
int print(char *str);
int _strlen(const char *str);
int buff(char c);

/* Decode */
int rot13(char *s);

/* Compare and conver functions*/
char *strtoUpper(char *s);
int isLowecase(char c);
int strCom(char *s1, char *s2);

/* Printing functions*/
int printChar(va_list list);
int printInt(va_list list);
int printStr(va_list list);
int printBin(va_list list);
int printHexUpp(va_list list);
int printHexLow(va_list list);
int printOcta(va_list list);
int printUni(va_list list);
int printRev(va_list list);
int printRot(va_list list);
int printPoi(va_list list);


/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif

