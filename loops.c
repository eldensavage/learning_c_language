#include <stdio.h>

void bro(void)
{                        // if we put semicolon at this line,
    printf("hey bro\n"); //we saying to compiler we have existence function named bro() but not yet, but it will 
}


int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		bro();
	}

}