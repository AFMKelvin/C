#include <stdio.h>


// Function prototypes
void reverseArray(int arr[], int size);
double calculateAverage(int arr[], int size);

//Passes the array to a method that reverses the order of the numbers
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

//Passes the array to another method that calculates the arithmetic average of the numbers and returns the value to the calling program
double calculateAverage(int arr[], int size) {
    int sum = 0;

    int i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (double)sum / size;
}

int main() {
    int size = 0;

    
    // Continue looping until the user enters -1
    //Use a sentinel value to end this loop
    while (size != -1) {
        // prompts a user for a set amount of numbers and stores them in an array
        //Continues to prompt the user for additional sets of numbers until the user wants to quit
        printf("Enter the number of elements (enter -1 to quit): ");
        scanf("%d", &size);

        
        // Check if the user wants to quit
        if (size != -1) {
            // Declare an array of integers with a maximum size of 50
            int numbers[50];

            // Prompt the user to enter the numbers
            printf("Enter %d numbers:\n", size);
            int i;
            for (i = 0; i < size; i++) {
                printf("Number %d: ", i + 1);
                scanf("%d", &numbers[i]);
            }

            // Call the function to reverse the array
            reverseArray(numbers, size);

            //Displays the reversed order in the main
            printf("Reversed order:\n");
            for (i = 0; i < size; i++) {
                printf("%d ", numbers[i]);
            }
            printf("\n");

            // Call the function to calculate the average
            double average = calculateAverage(numbers, size);
            printf("Arithmetic Average: %lf\n", average);

            //displays each number and how far the number is from the arithmetic average
            printf("Distance from the average:\n");
            for (i = 0; i < size; i++) {
                printf("%d is %.2lf away from the average.\n", numbers[i], (double)numbers[i] - average);
            }
        }
    }

    return 0;
}



