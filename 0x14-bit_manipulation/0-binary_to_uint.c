#include "main.h"

/**
 * binary_to_uni - converts binary number to unsigned int
 * @b: binary
 * Retrun: returns unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uin;
	int len, base_two;

	if (!b)
		return (0);

	uin = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			uin += base_two;
		}
	}

	return (uin);
}

