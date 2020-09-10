#include <stdio.h>
#include <cs50.h>

int main(void)
{
	// x and y never stops to want input until you entered long integer
	long x = get_long("x: ");
	long y = get_long("y: ");

	printf("%li\n", x+y);
}