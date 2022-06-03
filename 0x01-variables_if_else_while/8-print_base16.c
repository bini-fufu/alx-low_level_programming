#include <stdio.h>
/**
 * main - Entry point
 * Description: prints 0-9
 * Return: 0
 */
int main(void)
{
	char i;
	char j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}

	for (i = 'a'; i <= 'f' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
