#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3, average;

    cout << "Please enter a real number" << endl;
    cin >> num1;

    cout << "Please enter another real number" << endl;
    cin >> num2;

    cout << "Please enter a third real number" << endl;
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "The average of the three numbers is: " << average << endl;
    return 0;
}