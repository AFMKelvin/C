#include <stdio.h>
//this program calculates average miles per gallon per tankful
//this program adds all tankfuls and calculates average miles per gallon
int main() {
    double totalMiles = 0.0;    // total miles driven
    double totalGallons = 0.0;  // total gallons used
	double gallons;
    

    printf("Enter the gallons used (-1 to end): ");
    scanf("%lf", &gallons);

    while (gallons != -1) {
    	
     //variables used to calculate mpg
    double miles;   
    double mpg;   

        printf("Enter the miles driven: "); //input miles driven
        scanf("%lf", &miles);

        mpg = miles / gallons; //calculates mpg
        printf("The miles per gallon for this tank was %.2lf\n", mpg); //output mpg

        totalMiles += miles;	//adds all miles to previous total
        totalGallons += gallons; //adds all gallons to previous total

        printf("Enter the gallons used (-1 to end): ");		//input gallons used
        scanf("%lf", &gallons);
    }

    double averageMpg = totalMiles / totalGallons;	//calculate average mpg
    printf("The average miles/gallon for all tanks was %.2lf\n", averageMpg);

    return 0;
}


