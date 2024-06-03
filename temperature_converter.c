#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
float temperature_converter(char current, char convert_to, float value);

int main(void) {

    char current, convert_to;
    float value;
    printf("Welcome to the temperature converter program\n");
    printf("In this program you can convert the temperature from Celsius to Fahrenheit or kelvin and vice versa\n");
    printf("What is your current value in Celsius/Fahrenheit/Kelvin: ");
    printf("Enter the value: C for Celsius, F for Fahrenheit, K for Kelvin: ");
    scanf(" %c", &current);
    if (current == 'C') {
        printf("You chose Celsius\n");
    }
    else if (current == 'F') {
        printf("You chose Fahrenheit\n");
    }
    else if (current == 'K') {
        printf("You chose Kelvin\n");
    }
    else {
        printf("Invalid choice\n");
    }
    printf("In which value do you want to convert the value in Celsius/Fahrenheit/Kelvin: ");
    printf("Enter the value: C for Celsius, F for Fahrenheit, K for Kelvin: ");
    scanf(" %c", &convert_to);
    if (convert_to == 'C') {
        printf("You chose Celsius\n");
    }
    else if (convert_to == 'F') {
        printf("You chose Fahrenheit\n");
    }
    else if (convert_to == 'K') {
        printf("You chose Kelvin\n");
    }
    else {
        printf("Invalid choice\n");
    }

    printf("Enter the value of temperature: ");
    scanf("%f", &value);

    temperature_converter(current, convert_to, value);

    return 0;
}

float temperature_converter(char current, char convert_to, float value) {
    float result1,result2,result;
    float a = 9;
    float b = 5;
    float fraction1,fraction2;
    fraction1 = a/b;
    fraction2 = b/a;
    printf("fraction1: %f\n", fraction1);
    printf("fraction2: %f\n", fraction2);
    if (current == 'C' && convert_to == 'F') {
        result = (value * fraction1)+32;
        printf("The temperature in Fahrenheit is: %f\n", result);
    }
    else if (current == 'C' && convert_to == 'K') {
        result = value + 273.150;
        printf("The temperature in Kelvin is: %f\n", result);
    }
    else if (current == 'C' && convert_to == 'c') {
        result = value;
        printf("The temperature in Celsius is: %f\n", result);
    }
    else if (current == 'F' && convert_to == 'C') {
        result = (value - 32) * (fraction2);
        printf("The temperature in Celsius is: %f\n", result);
    }
    else if (current == 'F' && convert_to == 'K') {
        result = (value - 32) * (fraction2) + 273.150;
        printf("The temperature in Kelvin is: %f\n", result);
    }
    else if (current == 'F' && convert_to == 'F') {
        result = value;
        printf("The temperature in Fahrenheit is: %f\n", result);
    }
    else if (current == 'K' && convert_to == 'C') {
        result = value - 273.150;
        printf("The temperature in Celsius is: %f\n", result);
    }
    else if (current == 'K' && convert_to == 'F') {
        result = (value - 273.150) * (fraction1) + 32;
        printf("The temperature in Fahrenheit is: %f\n", result);
    }
    else if (current == 'K' && convert_to == 'K') {
        result = value;
        printf("The temperature in Kelvin is: %f\n", result);
    }
    else {
        printf("Invalid choice\n");
    }
    return result;
}