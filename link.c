#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

struct sNkechi {
	int age;
};

struct sNkechi *getNewNkechi(const int age)
{
	struct sNkechi *newNkechi = NULL;
	newNkechi = malloc(sizeof(struct sNkechi));
	newNkechi->age = age;
	printf("created new person at %p\n", newNkechi);
	return newNkechi;
}

int main()
{
	printf("\n\n** START **\n\n");

	return (0);
}
