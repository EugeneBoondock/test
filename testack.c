#include <stdio.h>

int main(m, n)
{
	int a, b;
	{
		int ans;
		if (a == 0) ans = b + 1;
		else if (b == 0) ans = ack(a - 1, 1);
		else ans = ack(a - 1, ack(a, b - 1));
		return (ans);
	}
}

int main(void)
{
	int f;

	f = ack(4, 5);
	printf("ack = %d\n", f);
	return (0);
}
