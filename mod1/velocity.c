#include <stdio.h>

int main()
{
	float s1;
	float s2;
	float m1;
	float m2;
	float v1;
	float v2;
	float acc;

	printf("How far did the object travel during the first interval?\n");
	scanf("%f", &m1);
	printf("How long was the first interval?\n");
	scanf("%f", &s1);
	v1 = m1 /s1;
	printf("The velocity over the first interval was %f m/s, or %f  km/hr.\nHow far did the object travel during the second inverval?", v1, v1 * 3.6);
	scanf("%f", &m2);
	printf("How long was the second interval?");
	scanf("%f", &s2);
	return 0;
	}	

