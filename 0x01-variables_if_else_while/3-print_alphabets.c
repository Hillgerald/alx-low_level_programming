#include <stdio.h>
/**
 * main - a program that prints alphabets, lowercase and uppercase
 * Return: 0 is a success
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	for (i = 0; i < 26; i++)
	{
	putchar('A' + i);
	}
putchar('\n');
return (0);
}
