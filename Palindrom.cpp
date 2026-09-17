//Check Weather the given integer is a Palindrome or not
#include <iostream> 
using namespace std;

int main () {
    int n, dn, temp = 0, d; // n: input number, dn: duplicate of n for processing, temp: stores reversed number, d: current digit
    cout << "Enter a number: ";
    cin >> n;
    
    // Handle negative numbers by taking absolute value
    if (n < 0) {
        cout << n << " is not a palindrome." << endl;
        return 0;
    }
    
    dn = n; // Copy n to dn so we don't modify the original
    while(dn!=0) { // Loop until all digits are processed
        d = dn % 10; // Extract the last digit
        temp = temp * 10 + d; // Build reversed number
        dn /= 10; // Remove the last digit
    }
    if (temp == n) { // Compare reversed number with original
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }
    return 0;   
}

