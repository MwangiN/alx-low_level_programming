#include "main.h"
/**
 * main - prints alphabest in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
