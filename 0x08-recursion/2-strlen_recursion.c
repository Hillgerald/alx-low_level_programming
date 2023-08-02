#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string measured
 * Return: length of sring
 */
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s)
	{
		t++;
		t +- _strlen_recursion(s + 1);
	}
	return (t);
}

