#include <iostream>
using namespace std;

float volume(float s);
float volume (float r, float h);
float volume(float l, float b, float h);

int main () {
    cout<<"n1: Volume of Cube";
    cout<<"\nn2: Volume of Cylinder";
    cout<<"\nn3: Volume of Cuboid";
    cout<<"\nEnter your choice: ";
    cout<<"\n\n: Quit";

    int choice; 
    cin>>choice;
    switch(choice) {
        case 1: {
            float s;
            cout<<"Enter the side of the cube: ";
            cin>>s;
            cout<<"Volume of Cube is: "<<volume(s);
            break;
        
        }
        case 2: {
            float r, h;
            cout<<"Enter the radius and height of the cylinder: ";
            cin>>r>>h;
            cout<<"Volume of Cylinder is: "<<volume(r, h);
            break;
        }

        case 3: {
            float l, b, h;
            cout<<"Enter the length, breadth and height of the cuboid: ";
            cin>>l>>b>>h;
            cout<<"Volume of Cuboid is: "<<volume(l, b, h);
            break;
        }
        case 4: {
            cout<<"Exiting the program. Goodbye!";
            break;
        }
        default: {
            cout<<"Invalid choice! Please select a valid option.";
        }
    }
    return 0;   
}

float volume(float s) {
    return s * s * s;
}

float volume(float r, float h) {
    return 3.14159 * r * r * h;
}

float volume(float l, float b, float h) {
    return l * b * h;
}