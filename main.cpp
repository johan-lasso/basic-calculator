#include <iostream>
#include <cmath>

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
        std::cout << valOne << " + " << valTwo << " = " << result << "\n";
        break;
    case '-':
        result = valOne - valTwo;
        std::cout << valOne << " - " << valTwo << " = " << result << "\n";
        break;
    case '*':
        result = valOne * valTwo;
        std::cout << valOne << " * " << valTwo << " = " << result << "\n";
        break;
    case '/':
        result = valOne / valTwo;
        std::cout << valOne << " / " << valTwo << " = " << result << "\n";
        break;
    case '^':
        result = pow(valOne, valTwo);
        std::cout << valOne << " ^ " << valTwo << " = " << result << "\n";
        break;
    default: // In case any of the previous options were true
        std::cout << "invalid operator\n";
        break;
    }
}