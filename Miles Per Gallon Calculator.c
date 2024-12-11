#include <stdio.h>
 
int main() {
    float MilesTraveled;
    float GallonsUsed; 
    float mpg;
 
    //Promp user to input how many miles he trarveled 
    printf("Enter miles traveled: ");
    scanf("%f", &MilesTraveled);
 
    //Prompt user to input how many gallons of gas he used 
    printf("Enter the gallons used: ");
    scanf("%f", &GallonsUsed);
 
    //Calculate mpg by dividing MilesTraveled by GallonsUsed
    mpg = MilesTraveled / GallonsUsed;
 
    //Displays Results of miles per gallon
    printf("Miles Per Gallon (MPG): %.2f\n", mpg);
 
    return 0;
}
