#include <stdio.h>

int alfabet(int c)
{
	printf("%c", c);
	if (c < 'z') alfabet(c+1);


}

int main(void)
{
	char i = 'a';
	alfabet(i);
	return (0);
}
