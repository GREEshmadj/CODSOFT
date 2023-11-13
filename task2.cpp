#include <iostream>
using namespace std;
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
        return 0;
    }
}
int main() {
    float n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "if you want to end the choice offer then input a invalid number as choice"<<endl;

    int choice;
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;
    label:
        {
    switch (choice) {
        case 1:
            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;
        case 2:
            cout << n1 << " - " << n2 << " = " << n1 - n2<< endl;
            break;
        case 3:
            cout << n1 << " * " << n2 << " = " << n1*n2<< endl;
            break;
        case 4:
            cout << n1 << " / " << n2 << " = " << divide(n1, n2) << endl;
            break;
        default:
            {
                cout << "Invalid choice. Please enter a valid operation." << endl;
                return 0;
            }
    }}
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;
    goto label;
}

