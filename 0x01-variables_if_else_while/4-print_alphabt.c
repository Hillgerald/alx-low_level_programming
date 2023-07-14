#include <stdio.h>
/**
 * main - a program that prints alphabets except q and e
 * Return: 0 is a success
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
