#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    // Declare variables
<<<<<<< HEAD
    string n;
    int age,a,b,sum;
=======
    string name;
    int age,n,fact;
>>>>>>> master
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

<<<<<<< HEAD
    // removed adding two numbers
=======
    //finding factorial
    cout<<"enter the number to find factorial: ";
    cin>>n;
    fact=factorial(n);
    cout<<"factorial is: "<<fact;

>>>>>>> master

    return 0;
}

