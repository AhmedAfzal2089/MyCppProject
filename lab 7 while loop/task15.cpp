#include <iostream>
using namespace std;


int main() {
    int number, factorial = 1;

    cout << "Enter a number (less than 5): ";
    cin >> number;

    if (number >= 5) {
        cout << "factorial couldn't be calculated for num greater than or equal to 5." << endl;
        return 1;
    }

    int temp = number;

    cout << "Factorial for number is [";
    while (number > 0) {
        cout << number;
        if (number > 1) {
            cout << " * ";
        }
        factorial *= number;
        number--;
    }
    cout << "] is " << factorial << endl;

    return 0;
}
