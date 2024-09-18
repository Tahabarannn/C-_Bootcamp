#include <iostream>

using namespace std;

int main()
{
    int s1, s2;
    int sum, diff, prod, div;

    cout << "Enter two numbers : ";
    cin >> s1 >> s2;

    sum = s1 + s2;
    prod = s1 * s2;

    if (s1 > s2)
    {
        diff = s1 - s2;
        div = s1 / s2;
    }
    else
    {
        diff = s2 - s1;
        div = s2 / s1;
    }

    cout << "Sum : " << sum << endl;
    cout << "Difference : " << diff << endl;
    cout << "Product : " << prod << endl;
    cout << "Division : " << div << endl;
};