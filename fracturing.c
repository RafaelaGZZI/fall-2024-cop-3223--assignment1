//********************************************************
// Author: Rafaela Giacomazzi
// UCFID: 5531027
// Date: 9/08/24
// Class: COP 3223, Professor Parra
// //********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to get user input 
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter
double calculatePerimeter() {
    double distance = calculateDistance(); // Reuses calculateDistance
    double perimeter = 2 * PI * (distance / 2);

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 4.0; 
}

// Function to calculate the area
double calculateArea() {
    double distance = calculateDistance(); // Reuses calculateDistance
    double area = PI * pow((distance / 2), 2);

    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 4.0; 
}

// Function to calculate the width
double calculateWidth() {
    double distance = calculateDistance(); // Reuses calculateDistance
    printf("The width of the city encompassed by your request is %.2f\n", distance);
    return 1.0; 
}

// Function to calculate the height
double calculateHeight() {
    double distance = calculateDistance(); // Reuses calculateDistance
    printf("The height of the city encompassed by your request is %.2f\n", distance);
    return 1.0; 
}

// Main function 
int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; 
}

