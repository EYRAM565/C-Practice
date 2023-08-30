#include<stdio.h>



// Define the enum for employee type
enum etype {
    FULL_TIME,
    PART_TIME,
    CONTRACT
};

// Define the structure for the date
struct date {
    int day;
    int month;
    int year;
};

// Define the structure for an employee
struct employee {
    int employeeNumber;
    float compensation;
    enum etype empType;
    struct date hireDate;
};

int main() {
    // Declare an array of employee structures to store data for three employees
    struct employee employees[3];

    // Input data for three employees
    for (int i = 0; i < 3; i++) {
        printf("Enter data for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].employeeNumber);

        printf("Compensation (in dollars): ");
        scanf("%f", &employees[i].compensation);

        printf("Employee Type (0: FULL_TIME, 1: PART_TIME, 2: CONTRACT): ");
        int type;
        scanf("%d", &type);
        employees[i].empType = (enum etype)type;

        printf("Hire Date (day month year): ");
        scanf("%d %d %d", &employees[i].hireDate.day, &employees[i].hireDate.month, &employees[i].hireDate.year);
    }

    // Display information for each employee
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].employeeNumber);
        printf("Compensation: $%.2f\n", employees[i].compensation);

        // Print the employee type based on the enum
        switch (employees[i].empType) {
            case FULL_TIME:
                printf("Employee Type: Full-Time\n");
                break;
            case PART_TIME:
                printf("Employee Type: Part-Time\n");
                break;
            case CONTRACT:
                printf("Employee Type: Contract\n");
                break;
            default:
                printf("Employee Type: Unknown\n");
        }

        printf("Hire Date: %02d/%02d/%d\n", employees[i].hireDate.month, employees[i].hireDate.day, employees[i].hireDate.year);
        printf("\n");
    }

    return 0;
}
