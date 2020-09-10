#include <stdio.h>
#include <cs50.h>

int main(void)
{
	// x and y never stops to want input until you entered integer
	int x = get_int("x: ");
	
	int y = get_int("y: ");

	printf("%i\n", x+y);
}