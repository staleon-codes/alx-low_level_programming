#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 * Return: (0) if c is lowercase
 *	 : (1) if c is otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
