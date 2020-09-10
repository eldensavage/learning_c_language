// Abstraction and scope

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);


int main(void)
{
	int i = get_positive_int();
	printf("%i\n", i);
}


int get_positive_int(void)
{
	int n;
	do // do while loop: is the same thing with while loop, exceot it does one thing first before checking a condition
	{
		n = get_int("Positive Integer: "); // if you assign variable type in curely braces, you can use that only in curely braces. Scope Issue
	}
	while (n < 1);
	return n;
}