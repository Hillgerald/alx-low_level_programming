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
		(c <= 'z' && c != 'q' && c != 'e') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
