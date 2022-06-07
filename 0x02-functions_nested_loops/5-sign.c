#include "main.h"
/**
 * print_sign - Entry point
 * @n: variable carrier
 * Description: prints sign of the number
 * Return: 1 if n > 0, 0 if n ==0, -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
