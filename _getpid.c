#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int id = fork();

	if (id == 0) 
	{
		sleep(1);
	}
	printf("Current ID: %d, parent ID: %d\n", getpid(), getppid());
	return (0);
}
