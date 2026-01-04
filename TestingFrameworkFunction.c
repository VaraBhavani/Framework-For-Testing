// Frame work for Testing a Function with input variables, expected results and function.

#include <stdio.h>
#include "TestCaseStructure.h"

void run_test_case(Test test_cases[], int (*fun)(int))
{
	int all_passed = 1;
	int counter;
	int size = sizeof(test_cases) / sizeof(test_cases[0]);
	for (counter = 0; counter < size; counter++)
	{
		int result = fun(test_cases[counter].testing_input);
		if (result != test_cases[counter].expected_result)
		{
			printf("Failed: %d\n", test_cases[counter].testing_input);
			all_passed = 0;
		}
	}
	if (all_passed)
	{
		printf("All test cases passed. ");
	}

}

