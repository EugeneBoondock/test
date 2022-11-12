#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t eupid;

	eupid = getpid();
	printf("%u\n", eupid);
	return (0);
}
