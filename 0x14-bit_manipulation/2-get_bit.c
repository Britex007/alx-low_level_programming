#include "main.h"

/**
 * get_bit - this returns the value of a bit at specifies index
 * @a: unsigned long int input.
 * @index: shows the index of the bit.
 *
 * Return: value of the given bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (a == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; a >>= 1, i++)
	{
		if (index == i)
		{
			return (a & 1);
		}
	}

	return (-1);
}
