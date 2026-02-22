#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch (op) {
        case '+':
            cout << "Result: " << (a + b) << endl;
            break;

        case '-':
            cout << "Result: " << (a - b) << endl;
            break;

        case '*':
            cout << "Result: " << (a * b) << endl;
            break;

        case '/':
            if (b == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << "Result: " << (a / b) << endl;
            break;

        case '%':
            // % works only with integers
            cout << "Result: " << (static_cast<int>(a) % static_cast<int>(b)) << endl;
            break;

        default:
            cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}
