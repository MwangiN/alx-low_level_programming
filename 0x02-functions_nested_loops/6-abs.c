#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@a: number is input as an integer
 * Return: Always 0 (Success)
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
