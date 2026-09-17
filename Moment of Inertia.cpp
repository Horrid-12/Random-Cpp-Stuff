#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
// Forward declaration  
void calculatemomentfinertia(vector<int> &masses, vector<float> &distances, int n, float &moment){ //& : Address of

  moment = 0.0;

  for(int i=0; i<n; i++) {
      moment += masses[i] * distances[i] * distances[i];
  }
}       

//Function to calculate the kinetic energy of the rotating body
float calculateKineticEnergy(float &moment, float &angularVelocity) {
    return 0.5 * moment * angularVelocity * angularVelocity;
}

//Validation
bool validatePositive(float value) {
    if(value <= 0) {
        cout << "Error: Value must be positive! Please enter again." << endl;
        return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter number of point masses: ";
    cin >> n;

    vector<int> masses(n);
    vector<float> distances(n);

    // Taking input using loop
    for(int i=0; i<n; i++) {
        int mass;
        float distance;
        
        // Validate mass input
        do {
            cout << "Enter mass (in kg) " << i+1 << ": ";
            cin >> mass;
            if(!validatePositive(mass)) {
                cin.clear();
                cin.ignore(10000, '\n');
            }
        } while(mass <= 0);
        
        // Validate distance input
        do {
            cout << "Enter distance of mass (in meters) " << i+1 << ": ";
            cin >> distance;
            if(!validatePositive(distance)) {
                cin.clear();
                cin.ignore(10000, '\n');
            }
        } while(distance <= 0);
        
        masses[i] = mass;
        distances[i] = distance;
    }
    //Function call
    float moment; 
    calculatemomentfinertia(masses, distances, n, moment);  
    cout << "Moment of Inertia = " << moment << endl;
    float angularVelocity;
    cout << "Enter angular velocity (in rad/s): ";
    cin >> angularVelocity;
    float kineticEnergy = calculateKineticEnergy(moment, angularVelocity);
    cout << "Kinetic Energy = " << kineticEnergy << " Joules" << endl;
    return 0;
}  