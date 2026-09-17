#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout<<"Enter the elements of Array:";
    for(int i=0; i<10; i++) {
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<10; i++) {
        sum += arr[i];
    }
    cout<<"Sum of the elements of the array is: "<<sum; 

    float avg = (sum / 10.0);
    cout<<"\nAverage of the elements of the array is: "<<avg;

    return 0;
}