#include <stdio.h>




// Function to calculate the letter grade, switch statement
// A: 90 - 100, B: 80 - 89, C: 70 - 79, D: 60 - 69, F: 0 - 59
char calculateLetterGrade(float average) {
    int gradeRange = (int)average / 10;

    switch (gradeRange) {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }
}






// Function to get the letter grade and update counters
char getLetterGrade(int classAverage, int *countA, int *countB, int *countC, int *countD, int *countF) {
    char letterGrade = calculateLetterGrade(classAverage);
    
    *countA += (letterGrade == 'A');
    *countB += (letterGrade == 'B');
    *countC += (letterGrade == 'C');
    *countD += (letterGrade == 'D');
    *countF += (letterGrade == 'F');

    return letterGrade;
}




//Develop a program that accepts information on 10 students
int main() {
    
    // Parallel arrays to store information for each student
    int studentIDs[10];
    int classAverages[10];
    char letterGrades[10];

    // Counters for each letter grade
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;

    int i;
    
    //The user should be able to input the students ID#, students class average
    for (i = 0; i < 10; ++i) {
        
        int std_id;
        int std_cls_avg;

        printf("Enter student %d's ID: \n", i + 1);
        scanf("%d", &std_id);
        printf("Enter student %d's Class Average: \n", i + 1);
        scanf("%d", &std_cls_avg);
        printf("\n");

        studentIDs[i] = std_id;
        classAverages[i] = std_cls_avg;

        
        // Calculate letter grade and update counters
        letterGrades[i] = getLetterGrade(std_cls_avg, &countA, &countB, &countC, &countD, &countF);
    }

    
    
    
    
    //program should print the students' ID#, class average, and the letter grade
    for (i = 0; i < 10; ++i) {
       
        printf("Student ID: %d\n", studentIDs[i]);
        printf("Class Average: %d\n", classAverages[i]);
        printf("Letter Grade: %c\n", letterGrades[i]);
        printf("\n");
    }

    
    
    
    
    // Display total count of each letter grade
    printf("Number of students who earned each grade:\n");
    printf("A: %d\n", countA);
    printf("B: %d\n", countB);
    printf("C: %d\n", countC);
    printf("D: %d\n", countD);
    printf("F: %d\n", countF);

    return 0;
}

