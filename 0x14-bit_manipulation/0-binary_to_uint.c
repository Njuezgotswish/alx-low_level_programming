#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars representing a binary number
 *
 * Return: the converted number, or 0 if b is NULL or contains non-binary chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;
	int base_two = 1;

	if (b == NULL)
		return (0);

	/* calculate string length */
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	/* convert binary to decimal */
	for (len--; len >= 0; len--)
	{
		if (b[len] == '1')
			num += base_two;

		base_two *= 2;
	}

	return (num);
}
