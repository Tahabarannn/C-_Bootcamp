// EX 1 - CALCULATOR

#include <iostream>

using namespace std;

/* sum, subtract, multiply, divide
    function definitions
    choices
 */

enum OperationCodes
{
    sumOp = 1,
    subtractOp = 2,
    multiplyOp = 3,
    divideOp = 4,
    exitOp = 5
};

// Declaration
int sum();
int subtract();
int multiply();
int divide();
void displayChoices();

int main()
{
    int choice = 0;

    while (choice != exitOp)
    {
        cout << "Please select the operation you want to perform:  \n\n"
             << endl;
        displayChoices();
        cin >> choice;

        switch (choice)
        {
        case sumOp:
            sum();
            break;

        case subtractOp:
            subtract();
            break;

        case multiplyOp:
            multiply();
            break;

        case divideOp:
            divide();
            break;

        case exitOp:
            cout << "Exiting the program..." << endl;
            break;

        default:
            cout << "Please select appropriate values. Try again!" << endl;
            break;
        }
    }

    return 0;
}

// function definitions
void displayChoices()
{
    cout << "1. Sum" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
}

int sum()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    return a + b;
}

int subtract()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
    return a - b;
}

int multiply()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
    return a * b;
}

int divide()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "Division of " << a << " and " << b << " is " << a / b << endl;
    return a / b;
}
