#include "main.h"

/**
 * _isupper - checks for uppercase and lowercase
 * @c: integer to check
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

