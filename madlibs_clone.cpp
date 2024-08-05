#include <iostream>
#include <string>
using namespace std;

int main() {
    string adjective1, girlsName, adjective2, occupation1, placeName,
    clothing, hobby, adjective3, occupation2, boysName, mansName;

    cout << "Enter an adjective: ";
    getline(cin, adjective1);
    
    cout << "Enter a girl's name: ";
    getline(cin, girlsName);

    cout << "Enter another adjective: ";
    getline(cin, adjective2);

    cout << "Enter an occupation: ";
    getline(cin, occupation1);

    cout << "Enter a place name: ";
    getline(cin, placeName);

    cout << "Enter a type of clothing: ";
    getline(cin, clothing);

    cout << "Enter a hobby: ";
    getline(cin, hobby);

    cout << "Enter another adjective: ";
    getline(cin, adjective3);

    cout << "Enter another occupation: ";
    getline(cin, occupation2);

    cout << "Enter a boy's name: ";
    getline(cin, boysName);

    cout << "Enter a man's name: ";
    getline(cin, mansName);



    cout   << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 
                << " " << occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " << clothing << " and " 
                << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2 << " named " << boysName << " but her father, King "
                << mansName << ", forbade her from seeing him.";

    return 0;
}