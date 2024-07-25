#include <iostream>
#include <cmath>

// Function that does not return anything 
void printResult(double a, double b, double result, char symbol) {
    std::cout << a << " " << symbol << " " << b << " = " << result << "\n";
}

int main() {
    double valOne, valTwo, result; // double stores decimal numbers
    char opSymbol; // char stores characters

    // Printing to the console
    std::cout << "Which operation do you want to perform? (+, -, *, / or ^): ";
    // Getting input from the user
    std::cin >> opSymbol;

    std::cout << "Enter two values: ";
    std::cin >> valOne >> valTwo;

    // Evaluate the operation the user wants to perform 
    switch (opSymbol) {
    case '+':
        result = valOne + valTwo;
        printResult(valOne, valTwo, result, '+'); // Calling a function
        break;
    case '-':
        result = valOne - valTwo;
        printResult(valOne, valTwo, result, '-');
        break;
    case '*':
        result = valOne * valTwo;
        printResult(valOne, valTwo, result, '*');
        break;
    case '/':
        result = valOne / valTwo;
        printResult(valOne, valTwo, result, '/');
        break;
    case '^':
        result = pow(valOne, valTwo);
        printResult(valOne, valTwo, result, '^');
        break;
    default: // In case any of the previous options were true
        std::cout << "invalid operator\n";
        break;
    }
}