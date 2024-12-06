#include <stdio.h>

//Function to calculate parking charge-function been called
//Function prototype(declaration)
//Function argument-hours_parked
float calculateParkingCharge(float hours_parked) {
    if (hours_parked <= 2) {
        return 5.00;
    } else {
        float extra_hours = hours_parked - 2;
        return 5.00 + extra_hours * 2.50;
    }
}

//Main Function
int main() {
    float car1_hours_parked;
    float car2_hours_parked; 
    float car1_charge;
    float car2_charge;

    // Prompt and read hours parked for car1
    printf("Enter hours parked for car 1: ");
    scanf("%f", &car1_hours_parked);

    // Prompt and read hours parked for car2
    printf("Enter hours parked for car 2: ");
    scanf("%f", &car2_hours_parked);

    // Calculate charges for both cars
    car1_charge = calculateParkingCharge(car1_hours_parked);
    car2_charge = calculateParkingCharge(car2_hours_parked);

    // Display charges
    printf("Car 1 Parking Charge: $%.2f\n", car1_charge);
    printf("Car 2 Parking Charge: $%.2f\n", car2_charge);

    return 0;
}

