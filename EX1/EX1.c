#include <stdio.h>
int main()

{
	//Defining Constants
	const double Gravity=9.80;
	const double Efficiency=0.9;
        const double Density_Water=1000;

	//Defining variables
	double Height;
        double Flow_Rate;
	double Mass_PerSec;
	double Work_PerSec;
	double Power_Megawatts;

	printf("Please enter the height of the dam in meters \n");
	scanf("%lf", &Height);
	printf("Please enter the rate of flow of water from the dam in cubic meters per second\n");
	scanf("%lf", &Flow_Rate);
	Mass_PerSec=Density_Water*Flow_Rate; //converting the rate of flow of water per second to the mass of water flowing per second
	Power_Megawatts=(Mass_PerSec * Gravity * Height * Efficiency)/1000000.0; //calculating the power produced and converting it to megawatts(1MW=10^6W)
	printf("The power produced is: %.2f megawatts\n", Power_Megawatts);
	return 0;
}
