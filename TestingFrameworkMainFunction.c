// main Function testing framework function.

#include <stdio.h>
#include "TestCaseStructure.h"

int is_prime(int);
int run_test_case(char *, Test[], int (*fun)(int));

void main()
{
	Test test_cases[] = {
		{-30, 0},
 		{0, 0}, 
 		{1, 0}, 
 		{2, 1}, 
 		{37, 1}, 
 		{958, 0}, 
 		{9991, 0}, 
 		{735688, 0}
	};
	
	run_test_case("Prime Program", test_cases, is_prime);

}