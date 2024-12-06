#include <stdio.h>

//this program searches for a value in an array of seven from value input by user

int main() {
    				
    int array[7]; // state size of array
    
	int i; // initialize array values, index multiplied by 5

    
    for (i = 0; i < 7; ++i) {	
        array[i] = i * 5;
    }


    
    int searchValue;	//input value to search
    printf("Input value to search: ");
    scanf("%d", &searchValue);

    
    int foundIndex = -1; 	// searches for value

    for (i = 0; i < 7; ++i) {
        if (array[i] == searchValue) {
            foundIndex = i;
            
        }
    }

    
    if (foundIndex != -1) {		// output result of search
        printf("I found your value in index %d.\n", foundIndex);
    } else {
        printf("Your value was not found in the array.\n");
    }


    return 0;
}
