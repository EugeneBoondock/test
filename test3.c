#include <stdio.h>

int main(void)
{
	int v[5];

	v[1] = 22;
	v[2] = 54;
	v[3] = 43;
	v[4] = 32;
	v[5] = 21;
	printf("Value of v[1]: %d\n", v[1]);
	printf("Value of v[2]: %d\n", v[2]);
	printf("Value of v[3]: %d\n", v[3]);
	printf("Value of v[4]: %d\n", v[4]);
	printf("Value of v[5]: %d\n", v[5]);
	printf("Address of 'v[1]': %p\n", &(v[1]));
	printf("Address of 'v[2]': %p\n", &(v[2]));
	printf("Address of 'v[3]': %p\n", &(v[3]));
	printf("Address of 'v[4]': %p\n", &(v[4]));
	printf("Address of 'v[5]': %p\n", &(v[5]));

	return (0);
}
