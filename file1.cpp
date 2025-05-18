#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string n;
    int age,a,b,sum;
    double height;

    // Prompt user for their name
    cout << "Enter your sweet name: ";
    getline(cin, n); // Allows input of full name with spaces

    // Prompt user for their age
    cout << "Enter your sweet age: ";
    cin >> age;

    // Prompt user for their height in centimeters
    cout << "what's your height (in cm): ";
    cin >> height;

    // Display the collected information
    cout << "\n--- User Information ---" << endl;
    cout << "Name: " << n << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " cm" << endl;

    //adding two numbers
    cout<<"enter any two numbers: ";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum of the entered two numbers is "<<sum;

    return 0;
}
