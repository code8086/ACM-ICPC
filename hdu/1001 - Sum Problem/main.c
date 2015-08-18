#include <stdio.h>

int main ()
{
	int n, ans;
	while (scanf ("%d", &n) != EOF)
	{
		ans = n+1;
		if (n % 2)
		{
			ans /= 2;
		}
		else
		{
			n /= 2;
		}
		ans *= n;
		printf ("%d\n\n", ans);
	}
	return 0;
}

