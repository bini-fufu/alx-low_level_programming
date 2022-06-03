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

	for (chara = 'z'; chara >= 'a'; chara--)
	{
		putchar(chara);
	}
	putchar('\n');
	return (0);
}
