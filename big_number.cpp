#include <iostream>

using namespace std;

int main()
{
    int s1, s2;

    cout << "Enter two numbers : ";
    cin >> s1 >> s2;

    if (s1 == s2)
    {
        cout << "Both numbers are equal";
    }
    else if (s1 > s2)
    {
        cout << "First number is greater than second number" << endl;
    }
    else
    {
        cout << "Second number is greater than first number" << endl;
    }

    return 0;
}