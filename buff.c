#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 2;
	char *buf = malloc(sizeof(char) * n);

	printf("$ ");
	getline(&buf, &n, stdin);

	printf("Name is %sBuffer size is %ld\n", buf, n);
	free(buf);

	return (0);
}
