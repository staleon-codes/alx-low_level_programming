#include "main.h"
/**
 * flip_bits -  changes the bit value to 0 of a given index.
 * @n: the input number
 * @m: the input number
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, f;
	p = 64;
	f = 0;
	while (p--)
	{
	if ((n & 1) != (m & 1))
	f++;
	n >>= 1;
	m >>= 1;
	}
	return (f);
}
