#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 1 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (1);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (1);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
