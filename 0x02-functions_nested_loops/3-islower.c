#include "main.h"
/**
 * _islower - Entry point
 * Description: check a lowercase
 * @c: receive integer value
 * Return: 1 if true. 0 if fals
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		return (0);
	}
}
