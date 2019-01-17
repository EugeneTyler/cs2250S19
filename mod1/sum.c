#include <stdio.h>

int main()
{
	int val1; //these are my numbers
	int val2;
	int val3;
	printf("What is the first number: "); //print the question onscreen
	scanf("%d", &val1); //assign the answer as value one
	printf("What is the second number: "); 
	scanf("%d", &val2);
	val3 = val1 + val2; //the third value is the sum of the first two
	printf("The sum of your numbers is %d\n", val3); //tell them the third value
	printf("%d multiplied by two is %d\n", val3, val3 * 2);
	return 0;
}

