#include "main.h"
/**
 * jack_bauer - minutes of the day
 * Description: minutes of the day
 * Return: void
 */
void jack_bauer(void)
{
	int tens, ones, min_tens, min_ones, hrs_max;

	hrs_max = 58;
	tens = '0';
	while (tens < '3')
	{
		if (tens == '2')
		{
			hrs_max = '4';
		}
		ones = '0';
		while (ones < hrs_max)
		{
			min_tens = '0';
			while (min_tens < '6')
			{
				min_ones = '0';
				while (min_ones < 58)
				{
					_putchar(tens);
					_putchar(ones);
					_putchar(':');
					_putchar(min_tens);
					_putchar(min_ones);
					_putchar('\n');
					min_ones;
				}
				min_ones = '0';
				min_ten++;
			}
			min_tens = '0';
			ones++;
		}
		ones = '0';
		tens++;
	}
}
