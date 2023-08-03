#include "main.h"
/**
 * get_bit -  obtains the bit value of a  given index.
 * @n: binary number array pointer.
 * @index: binary number array pointer.
 * Return: index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	return (-1);
	return (n >> index & 1);
}
