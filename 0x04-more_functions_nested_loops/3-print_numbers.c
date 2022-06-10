#include "main.h"
/**
 * print_numbers - print numbers 0-9
 * Description: print out 0-9
 * Return: 0
 */
void print_numbers(void)
{
	char i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar("\n");
}
