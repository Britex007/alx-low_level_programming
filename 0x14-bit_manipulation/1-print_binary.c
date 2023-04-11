#include "main.h"

/**
 * print_binary - prints binary rep of a numb.
 *
 * @x: unsigned long integer
 *
 * Return: this has no return
 */
void print_binary(unsigned long int x)
{
	if (x >> 0)
	{
		if (x >> 1)
			print_binary(x >> 1);
		_putchar((x & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
