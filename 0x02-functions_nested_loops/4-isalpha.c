#include "main.h"

/**
 * _isalpha - checks for alphabetical character in the code
 * @c: c is an ascii character
 *
 * Return: True if alphabetic
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
