#include "main.h"
#include <string.h>
/**/
unsigned int _pow(int base, int pow);
/**
 * binary_to_uint - changes binary number to unsigned int.
 * @b: array pointer to binary string.
 * Return: the unsigned int number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dismal, len, i;

	dismal = 0;
	i = 0;
	if (!b)
	return (0);
	len = strlen(b);
	while (b[i])
	{
	if (!(b[i] == '0' ||  b[i] == '1'))
	return (0);
	dismal = dismal + (b[i] - '0') * _pow(2, len - i - 1);
	i++;
	}
	return (dismal);
}
/**
 * _pow - to calculate the power
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
