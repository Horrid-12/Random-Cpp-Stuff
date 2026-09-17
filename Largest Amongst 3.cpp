#include <iostream>
using namespace std;

int main() {
    int a, b, c, M;
    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;
    if (b>c) {
        M=b;
    }
    else {
        M=c;    
    }
    
    if (a>M) {
        M=a;
    }
    cout<<"Largest number is: "<<M;
    return 0;   
    }
    