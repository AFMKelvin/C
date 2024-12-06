#include <stdio.h>

//Function to calculate parking charge-function to be called
//Function prototype(declaration)
//Function argument-hours_parked
const double min = 5.00;  // Minimum charge
const double hourlyRate = 2.5;  // Hourly rate

double calculateParkingCharge(double hours) {
    double cost = min + hourlyRate * hours;
    return cost;
}

//Main function
int main() {
    double car1Hours;
	double car2Hours;
    double car1Charge;
	double car2Charge;

//Prompt and read hours parked for car1
    printf("Enter the number of hours parked for car 1: ");
    scanf("%lf", &car1Hours);

//Prompt and read hours parked for car2
    printf("Enter the number of hours parked for car 2: ");
    scanf("%lf", &car2Hours);

//Calculate charges for both cars
    car1Charge = calculateParkingCharge(car1Hours);
    car2Charge = calculateParkingCharge(car2Hours);

//Display charges
    printf("Parking charge for car 1: $%.2lf\n", car1Charge);
    printf("Parking charge for car 2: $%.2lf\n", car2Charge);

    return 0;
}

