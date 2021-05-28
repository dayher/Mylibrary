#include <stdio.h>

int main (void)
{
	size_t i;
	for (i=1;i<=100;i++)
		{ 
			if (!(i%3))
				{
					if(!(i%5)) puts("FizzBuzz");
					else puts("Fizz");
				}
			else if(!(i%5)) puts("Buzz");
			else printf("%ld\n",i);
		}
	return 0;
}
