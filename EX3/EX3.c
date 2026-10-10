#include <stdio.h>
#include <math.h>
int main()

{
	double Height, Base, Area;

	printf("Enter the area of the sail in square meters:\n");
	scanf("%lf", &Area);

	Height= sqrt(3.0*Area); //Area=0.5*Base*Height
	Base= Height*(2/3.0);

	printf("The Height of the sail: %.2f meters\n", Height);
	printf("The Base of the sail: %.2f meters\n", Base);
	return 0;
}
	
