// Function for checking prime or not //
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_prime(int number)
{
	int counter, sqrt_number = sqrt(number);
	if (number < 2 || number > 2 && number % 2 == 0)
	{
		return 0;
	}

	else
	{
		for (counter = 3; counter <= sqrt_number; counter += 2)
		{
			if (number % counter == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}