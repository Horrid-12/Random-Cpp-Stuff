#include <iostream>
using namespace std;

class factorial {
    int a;
    public:
    factorial() {
      cout<<"Enter a number: ";
        cin>>a;
        int fact = 1;
        for (int i=1; i<=a; i++) {
            fact *= i;
        }
        cout<<"Factorial of "<<a<<" is: "<<fact;
    }
};

int main() {
    factorial fact;
    return 0;
}   