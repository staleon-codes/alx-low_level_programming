#include "main.h"
/**
 * get_endianness - checks the endianness whether big or little.
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c;
	c = (char *) &x;
	return ((int) *c);
}
