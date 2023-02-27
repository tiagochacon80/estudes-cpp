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
    //String length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length(); //output 26
    //Access Strings
    string myString  = "Hello";
    cout << myString[0]; //output H
    //Change String
    myString[1] = 'y'; //output Hyllo
    //User input Strings
    string name;
    cout << "Type your first name: ";
    cin >> name;
    cout << "Your name is: " << name;

    return 0;
}

