#include <stdio.h>

int main()
{
	int age = 21;
	int weight;
	printf("how old are you?\n");
	printf("I am %d years old\n", age);
	printf("The address of int age is %p\n", &age);// %p is the address of the variable
	age = 23;
	printf("I am %d years old and %d pounds\n", age, weight);
	return 0; //prevents errors
}
