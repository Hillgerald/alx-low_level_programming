#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *z = needle;

		while (*y == *z && *z != '\0')
		{
			y++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}
	return (0);
}
