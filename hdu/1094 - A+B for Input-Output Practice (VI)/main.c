#include <stdio.h>

int main ()
{
	int n, tmp, sum;
	while (scanf ("%d", &n) != EOF)
	{
		sum = 0;
		while (n--)
		{
			scanf ("%d", &tmp);
			sum += tmp;
		}
		printf ("%d\n", sum);
	}
	return 0;
}
