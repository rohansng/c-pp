#include <iostream>  // header file for input/output

using namespace std; // so we don’t need to write std:: everywhere

int main() {



    // Print output
    cout << "Hello, World! 🚀" << endl;

    // Variables
    int a = 10;
    float b = 5.5;

    // Arithmetic
    int sum = a + b;
    cout << "Sum of a and b: " << sum << endl;

    // Condition
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "b is greater than or equal to a" << endl;
    }

    // Loop
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0; // successful program end
}
