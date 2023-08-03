#include "main.h"

unsigned int _pow(int base, int pow);
/**
 * set_bit -  change the bit value to 1 of a given index.
 * @n: array pointer to binary number.
 * @index: array pointer to binary number.
 * Return: 1 or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	return (-1);
	*n = *n + _pow(2, index);
	return (1);
}
/**
 * _pow - calculates the power
 * @base: base
 * @pow: power
 * Return: outcome
 */
unsigned int _pow(int base, int pow)
{
	unsigned int result;
	if (pow == 0)
	return (1);
	if (pow == 1)
	return (base);
	result = base;
	while (--pow)
	result *= base;
	return (result);
}
