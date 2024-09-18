#include <iostream>

using namespace std;

const double pi = 3.14159;

int main()
{
    double area, circumference;
    int radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}