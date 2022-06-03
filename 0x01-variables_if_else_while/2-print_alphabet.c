#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: lowercase
 * Return: 0
 */
int main(void)
{
	int chara;

	for (chara = 'a'; chara <= 'z'; chara++)
	{
		putchar(chara);
	}
	putchar('\n');
	return (0);
}
