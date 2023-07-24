#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, z, q, len, h, digit;

	i = 0;
	z = 0;
	q = 0;
	len = 0;
	h = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && h == 0)
	{
		if (s[i] == '-')
			++z;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (z % 2)
				digit = -digit;
			q = q * 10 + digit;
			h = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			h = 0;
		}
		i++;
	}

	if (h == 0)
		return (0);

	return (q);
}


