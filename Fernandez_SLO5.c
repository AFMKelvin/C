#include <stdio.h>

// This program calculates the payroll for multiple employees

//function for grosspay
float calculateGrossPay(float hours, float rate) {
    float grossPay;

    if (hours > 40) {
        // Calculate overtime for a week of 40 hours
        grossPay = 40 * rate + (hours - 40) * 1.5 * rate;
    } else {
       
        grossPay = hours * rate;
    }

    return grossPay;
}

// function for tax withholding
float calculateWithholdingTax(float grossPay) {
    
    return 0.03525 * grossPay;
}

// function to calculate netpay
float calculateNetPay(float grossPay, float withholdingTax) {
    return grossPay - withholdingTax;
}

//main function to enter inputs, calculate formulas, outputs
int main() { 
    int numEmployees, i;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (i = 0; i < numEmployees; i++) {
        int employeeID;
        float hoursWorked;
		float hourlyRate;
		float grossPay;
		float withholdingTax;
		float netPay;

        printf("Enter employee ID: ");
        scanf("%d", &employeeID);

        printf("Enter hourly pay rate: ");
        scanf("%f", &hourlyRate);

        printf("Enter hours worked: ");
        scanf("%f", &hoursWorked);

        // Calculate gross pay
        grossPay = calculateGrossPay(hoursWorked, hourlyRate);

        // Calculate withholding tax
        withholdingTax = calculateWithholdingTax(grossPay);

        // Calculate net pay
        netPay = calculateNetPay(grossPay, withholdingTax);

        // Display results
        printf("\nEmployee ID: %d\n", employeeID);
        printf("Hours Worked: %.2f\n", hoursWorked);
        printf("Gross Pay: $%.2f\n", grossPay);
        printf("Withholding Tax: $%.2f\n", withholdingTax);
        printf("Net Pay: $%.2f\n\n", netPay);
    }

    return 0;
}

