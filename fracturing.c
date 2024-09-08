#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Função para pedir ao usuário um valor (usada em todos os cálculos)
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Função para calcular a distância entre dois pontos
double calculateDistance(double x1, double y1, double x2, double y2) {
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Função para calcular o perímetro com base na distância
double calculatePerimeter(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2); // Reutiliza calculateDistance
    double perimeter = 2 * PI * (distance / 2);

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 3.0; // Arbitrário, altere conforme a dificuldade sentida
}

// Função para calcular a área com base na distância
double calculateArea(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2); // Reutiliza calculateDistance
    double area = PI * pow((distance / 2), 2);

    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 4.0; // Arbitrário, altere conforme a dificuldade sentida
}

// Função para calcular a largura (width)
double calculateWidth(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2); // Reutiliza calculateDistance
    printf("The width of the city encompassed by your request is %.2f\n", distance);
    return 2.0; // Arbitrário, altere conforme a dificuldade sentida
}

// Função para calcular a altura (height)
double calculateHeight(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2); // Reutiliza calculateDistance
    printf("The height of the city encompassed by your request is %.2f\n", distance);
    return 2.0; // Arbitrário, altere conforme a dificuldade sentida
}

// Função principal que coordena tudo
int main(void) {
    // Solicitar os pontos uma vez
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    // Chamadas de função
    calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, y1, x2, y2);
    calculateHeight(x1, y1, x2, y2);
    

    return 0; // Garante que o programa retorne 0 para o autograder
}