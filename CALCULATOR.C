#include <stdio.h>

// Function declarations
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;

    do {
        printf("\n====== MINI CALCULATOR ======\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                printf("Thank you! Exiting calculator.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function definitions
void add() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result = %d\n", a + b);
}

void subtract() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result = %d\n", a - b);
}

void multiply() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result = %d\n", a * b);
}

void divide() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        printf("Result = %.2f\n", a / b);
    }
}
