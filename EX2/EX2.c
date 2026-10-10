#include <stdio.h>
int main()

{

	double Acceleration, TakeoffSpeed_KMh, TakeoffSpeed_ms, Distance, Time;

	printf("Enter the takeoff speed of the jet in km/hr:\n");
	scanf("%lf", &TakeoffSpeed_KMh);
        printf("Enter the distance in meters:\n");
        scanf("%lf", &Distance);

	TakeoffSpeed_ms=TakeoffSpeed_KMh/3.6; //converting the speed from kmph to m/s
	Acceleration=(TakeoffSpeed_ms*TakeoffSpeed_ms)/(2*Distance); 
	Time=TakeoffSpeed_ms/Acceleration;

	printf("The acceleration is: %.2f m/s^2\n", Acceleration);
        printf("The time to accelerate to takeoff speed is: %.2f seconds\n", Time);

        return 0;

}


	
