#include "main.h"

/**
 * _memset -allows a block of memory to be set to a specific value
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}