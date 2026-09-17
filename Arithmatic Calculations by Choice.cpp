#include <iostream>
using namespace std;

int main() {
    float a, b, result;
    cout<<"Enter two Numbers:";
    cin>>a>>b;  
    cout<<"Choose an operation to perform: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice (1-4): ";
    int choice;
    cin>>choice;
    switch(choice) {
        case 1:
            result = a + b;
            cout<<"Result of Addition: "<<result;
            break;
        case 2:
            result = a - b;
            cout<<"Result of Subtraction: "<<result;
            break;
        case 3:
            result = a * b;
            cout<<"Result of Multiplication: "<<result;
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                cout<<"Result of Division: "<<result;
            } else {
                cout<<"Error: Division by zero is not allowed.";
            }
            break;
        default:
            cout<<"Invalid choice! Please select a valid operation.";
    }
    return 0;
}