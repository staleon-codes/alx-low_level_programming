#include "main.h"

unsigned long int _pow(int base, int pow);
/**
 * clear_bit -  changes the bit value to 0 of a given index.
 * @n: array pointer to binary number.
 * @index: array pointer to binary number.
 * Return: index 1 or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	if (index >= 64)
	return (-1);
	p = _pow(2, index);
	if (*n >> index & 1)
	*n = *n - p;
	return (1);
}
/**
 * _pow - calculates the power
 * @base: base
 * @pow: power
 * Return: outcome
 */
unsigned long int _pow(int base, int pow)
{
	unsigned long int result;
	if (pow == 0)
	return (1);
	if (pow == 1)
	return (base);
	result = base;
	while (--pow)
	result *= base;
	return (result);
}
