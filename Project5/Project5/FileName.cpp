#include <iostream>
using namespace std;

double add(double x, double y) { return x + y; }
double subtract(double x, double y) { return x - y; }
double multiply(double x, double y) { return x * y; }
double divide(double x, double y) { return x / y; }

int main() {
    double a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+ - * /): ";
    cin >> op;

    switch (op) {
    case '+': cout << "Result = " << add(a, b) << endl; break;
    case '-': cout << "Result = " << subtract(a, b) << endl; break;
    case '*': cout << "Result = " << multiply(a, b) << endl; break;
    case '/': cout << "Result = " << divide(a, b) << endl; break;
    default: cout << "Invalid operator!" << endl;
    }

    return 0;
}