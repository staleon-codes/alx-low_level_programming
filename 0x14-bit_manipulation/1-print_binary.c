#include "main.h"
/**
 * print_binary - change number to binary.
 * @n: the input number
 * Return: binary number started by one
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
