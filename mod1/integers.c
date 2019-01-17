#include<stdio.h>

// This is a comment. Your compiler will ignore it.
/* This is a block comment.
 * As demonstrated.*/
// To compile my code run this command: gcc <file.c> -o <file>
int main()
{
	char Name;
	int Years;
	int Days;
	printf("What is your name?\n"); //prints output to screen
		
scanf("%c", &Name);
	printf("How old are you %d?\n", Name); //prints output to screen
	scanf("%d", &Years);
	Days = Years * 365;
	printf("You have lived for %d days.", Days);
	return 0;
}
