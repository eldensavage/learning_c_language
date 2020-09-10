#include <cs50.h>
#include <stdio.h>

int main(void)
{
	char answer = get_char("Do you agree? ");

	if (answer=='y' || answer=='Y') // || is the or 
	{
		printf("Agreed.\n");
	}

	else if (answer=='n' || answer=='N') // we should use '' instead of "" when we compare some values
	{
		printf("Declined.\n");
	}

}