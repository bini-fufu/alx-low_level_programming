#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * main - functions that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 * Desc: prints strings followed by a new line.
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pr;
       char *str;
	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pr, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(pr);
	printf("\n");
}
