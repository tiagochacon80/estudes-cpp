#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create a string variable
    string greeting = "Hello";
    cout << greeting;

    //Concatenation
    string firstName = "John ";
    string LastName = "Doe";
    string fullName = firstName + LastName;
    //Or
    string fullName = firstName + " " + LastName;
    //Or with append
    string fullName = firstName.append(LastName);

    return 0;
}

