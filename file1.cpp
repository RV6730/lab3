#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string name;
    int age;
    double height;

    // Prompt user for their name
    cout << "Enter your name: ";
    getline(cin, name); // Allows input of full name with spaces

    // Prompt user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Prompt user for their height in centimeters
    cout << "Enter your height (in cm): ";
    cin >> height;

    // Display the collected information
    cout << "\n--- User Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " cm" << endl;

    return 0;
}
