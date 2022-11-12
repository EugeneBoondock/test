#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[] = "pump it up pump pump pumpit up whooo pump pump pumo she gonna pump it up";

	char* sent = strtok(str, " ");
	while (sent != NULL)
			{
			printf("%s\n", sent);
			sent = strtok(NULL, " ");
			}
	return (0);
}
