#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    // Taking string input
    cout << "Enter your name: ";
    cin >> name;   // reads a single word

    // Taking integer input
    cout << "Enter your age: ";
    cin >> age;

    // Output the input back
    cout << "\n--- User Details ---" << endl;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    // Condition example
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }



    return 0;
}
