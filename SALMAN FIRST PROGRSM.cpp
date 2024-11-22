#include<iostream>
using namespace std;
int main()
 {
    int number, range;

    // Ask user for the number and the range
    cout << "Enter a number to generate its multiplication table: ";
    cin >> number;

    cout << "Enter the range for the multiplication table: ";
    cin >> range;

    cout << "Multiplication table of " << number << ":\n";

    for (int i = 1; i <= range; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}

