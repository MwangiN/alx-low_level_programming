#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
		if (h != 'e' && h != 'q')
			putchar(h);
	putchar('\n');
	return (0);
}
