/*Calculates miles per gallon. To calculate it we need to divide the miles traveled by the gallons of gas used.
 Written by: Kelvin Fernandez 
Date: October 3, 2023
*/
#include <stdio.h>

int main() {
    // Declare variables-use floating point-double
    double milesTraveled;
    double gallonsUsed; 
    double mpg;

    // Prompt user to enter miles traveled
    printf("Enter the miles traveled: ");
    scanf("%lf", &milesTraveled);

    // Prompt user to enter gallons used
    printf("Enter the gallons used: ");
    scanf("%lf", &gallonsUsed);

    // Calculate MPG
    mpg = milesTraveled / gallonsUsed;

    // Display the result
    printf("Your MPG is: %.2lf\n", mpg);

    return 0;
} 

