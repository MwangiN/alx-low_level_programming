#include <stdio.h>
/**
 * main- entry point
 *
 * Return: Alwasy 0 (Success)
 */
int main(void)
{
	int i, n = 50;
	int t1 = 0, t2 = 1;
	int nextTerm = t1 + t2;

	printf("%d, %d,", t1, t2);
	for (i = 3; i <= n; ++i)
	{
		printf("%d,\n", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
