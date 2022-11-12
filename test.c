#include <stdio.h>

int main(void)
{
	int n;
	int *p;

	n = 2000;
	p = &n;
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p' %p\n", p);
	*p = 12440;
	printf("Value of 'n': %d\n", n);
	return (0);
}
