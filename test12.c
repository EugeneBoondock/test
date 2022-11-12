#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;

	user.name = "Foo Bar";
	user.email = "foo@alx.io";
	user.age = 24;
	return (0);
}
