//If sum of cubes of digits is equal to the number itself, then it is called an Armstrong number. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153. Write a C++ program to check whether a given number is an Armstrong number or not.
#include <iostream>
using namespace std;

int main() {
    int n, dn, temp = 0, d; // n: input number, dn: duplicate of n for processing, temp: stores sum of cubes of digits, d: current digit
    cout <<"Enter a number: ";
    cin >> n;
    dn = n; // Copy n to dn so we don't modify the original
    while(dn!=0) { // Loop until all digits are processed
        d = dn % 10; // Extract the last digit
        temp += d * d * d; // Add the cube of the digit to temp
        dn /= 10; // Remove the last digit
    }
    if (temp == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}