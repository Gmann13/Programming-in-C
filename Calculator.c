/*
This is a simple calculator program that can perform addition, subtraction, multiplication, and division.
We will use functions to perform the operations.
User will be asked to enter the operation they want to perform and the numbers on which they want to perform the operation.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes

float addition(float num1, float num2);
float subtraction(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);

int main() {
    int operation,choice;
    float num1, num2;
    char ch;

    printf("Welcome to the calculator program\n");
    printf("In this program you can perform the following operations:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Note: The operations are performed on two numbers only\n");
    printf("What would you like to do today? Enter following choices (1/2/3/4/5):");
    scanf("%d", &operation);
    if (operation == 1) {
        printf("You chose addition\n");
    }
    else if (operation == 2) {
        printf("You chose subtraction\n");
    }
    else if (operation == 3) {
        printf("You chose multiplication\n");
    }
    else if (operation == 4) {
        printf("You chose division\n");
    }
    else if (operation == 5) {
        printf("You chose to exit the program\n");
        printf("Thankyou for using the program\n");
        printf("Have a Nice Day!!\n");
        exit(0);
    }
    else {
        printf("Invalid choice\n");
    }
    printf("Enter the first number that you want to perform the operation on: ");
    scanf("%f", &num1);
    printf("Enter the second number that you want to perform the operation on: ");
    scanf("%f", &num2);
    printf("The numbers you entered are: %f and %f\n", num1, num2);
    printf ("Do you want to change the numbers? (y/n): ");
    scanf(" %c", &ch);
    if (ch == 'y') {
        printf("which number do you want to change? \n");
        printf("1. First number\n");
        printf("2. Second number\n");
        printf("3. Both numbers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter the first number that you want to perform the operation on: ");
            scanf("%d", &num1);
            printf("The numbers you entered are: %f and %f\n", num1, num2);
        }
        else if (choice == 2) {
            printf("Enter the second number that you want to perform the operation on: ");
            scanf("%d", &num2);
            printf("The numbers you entered are: %f and %f\n", num1, num2);
        }
        else if (choice == 3) {
            printf("Enter the first number that you want to perform the operation on: ");
            scanf("%d", &num1);
            printf("Enter the second number that you want to perform the operation on: ");
            scanf("%d", &num2);
            printf("The numbers you entered are: %f and %f\n", num1, num2);
        }
        else if (choice == 4) {
            printf("The numbers you entered are: %f and %f\n", num1, num2);
        }
    }
    else {
        printf("The numbers you entered are: %f and %f\n", num1, num2);
    }

    if (operation == 1) {
        addition(num1, num2);
    }
    else if (operation == 2) {
        subtraction(num1, num2);
    }
    else if (operation == 3) {
        multiplication(num1, num2);
    }
    else if (operation == 4) {
        division(num1, num2);
    }
    else {
        printf("Invalid choice\n");
    }
    return 0;
}
float addition(float num1,float num2) {
    float sum;
    sum = num1 + num2;
    printf("The sum of the numbers is: %f\n", sum);
    return sum;
}

float subtraction(float num1,float num2) {
    float difference;
    difference = num1 - num2;
    printf("The difference of the numbers is: %f\n", difference);
    return difference;
}

float multiplication(float num1, float num2) {
    float product;
    product = num1 * num2;
    printf("The product of the numbers is: %f\n", product);
    return product;
}

float division(float num1,float num2) {
    float quotient;
    quotient = num1 / num2;
    printf("The quotient of the numbers is: %f\n", quotient);
    return quotient;
}
