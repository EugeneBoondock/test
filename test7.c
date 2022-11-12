#include <stdio.h>

int factorial(int n)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= n)
	{
		i = i * j;
		j++;
	}
	return (i);

}

int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
