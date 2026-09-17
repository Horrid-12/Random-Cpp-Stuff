#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Forward declaration of main
int main();

const float pi = 3.14;
const float e = 2.71;
const float G = 6.67430e-11; // Gravitational constant in m^3 kg^-1 s^-2
const float c = 299792458; // Speed of light in m/s
const float h = 6.62607015e-34; // Planck's constant in J·s
const float kB = 1.380649e-23; // Boltzmann constant in J/K
const float R = 8.314462618; // Universal gas constant in J/(mol·K) 
const float NA = 6.02214076e23; // Avogadro's number in mol^-1
const float sigma = 5.670374419e-8; // Stefan-Boltzmann constant in W·m^-2·K^-4
const float b = 2.897771955e-3; // Wien's displacement constant in m·K
const float me = 9.10938356e-31; // Electron mass in kg
const float mp = 1.67262192369e-27; // Proton mass in
const float u = 1.66053906660e-27; // Atomic mass unit in kg
const float e_charge = 1.602176634e-19; // Elementary charge in C
const float epsilon_0 = 8.854187817e-12; // Vacuum permittivity in F/m
const float mu_0 = 4e-7 * pi; // Vacuum permeability in H/m
const float k = 8.9875517923e9; // Coulomb's constant in N·m²/C²
const float Ry = 13.605693122994; // Rydberg constant in eV
const float a0 = 5.29177210903e-11; // Bohr radius in m
const float G0 = 9.80665; // Standard gravity in m/s²

//Unit Conversions
    float secordstoarcs(float seconds) {
        return seconds / 3600.0;
    }
    float secstoarcs(float seconds) {
           return seconds / 60 * pi/180;
        }
 
    float daysToSeconds(float days) {  
        return days * 86400.0;  
    }   

    float dynetoNewtons(float dyne) {  
        return dyne * 1e-5;  
    }
    
    float ergsToJoules(float erg) {  
        return erg * 1e-7;  
    }

    float caloriesToJoules(float calorie) {  
        return calorie * 4.184;  
    }

    float kwhToJoules(float kwh) {  
        return kwh * 3.6e6;  
    }

    float evtojoules(float ev) {  
        return ev * 1.60218e-19;  
    }

    float milimetersToMeters(float mm) {  
        return mm / 1000.0;  
    }

    float centimetersToMeters(float cm) {  
        return cm / 100.0;  
    }
    float kilometersToMeters(float km) {  
        return km * 1000.0;  
    }

    float inchesToMeters(float inch) {  
        return inch * 0.0254;  
    }

    float feetToMeters(float feet) {  
        return feet * 0.3048;  
    }

    float milesToMeters(float mile) {  
        return mile * 1609.34;  
    }

    float nanometersToMeters(float nm) {  
        return nm * 1e-9;  
    }

    float micrometersToMeters(float um) {  
        return um * 1e-6;  
    }

    float angstromsToMeters(float angstrom) {  
        return angstrom * 1e-10;  
    }

    float picometersToMeters(float pm) {  
        return pm * 1e-12;  
    }

    float litersToCubicMeters(float liters) {  
        return liters / 1000.0;  
    }
    float millilitersToCubicMeters(float ml) {  
        return ml / 1e6;  
    }
    float cubicCentimetersToCubicMeters(float cc) {  
        return cc / 1e6;  
    }
    float kelvinToCelsius(float kelvin) {  
        return kelvin - 273.15;  
    }
    float celsiusToKelvin(float celsius) {  
        return celsius + 273.15;  
    }
    float farenheitToCelsius(float fahrenheit) {  
        return (fahrenheit - 32) * 5.0 / 9.0;  
    }
    float celsiusToFarenheit(float celsius) {  
        return (celsius * 9.0 / 5.0) + 32;  
    }

    float atmToPascals(float atm) {  
        return atm * 101325.0;  
    }
    float barToPascals(float bar) {  
        return bar * 100000.0;  
    }
    float torrToPascals(float torr) {  
        return torr * 133.322;  
    }
    float psiToPascals(float psi) {  
        return psi * 6894.76;  
    }
    float mmHgToPascals(float mmHg) {  
        return mmHg * 133.322;  
    }
    float feetH2OToPascals(float feetH2O) {  
        return feetH2O * 2989.07;  
    }
    float megapascalsToPascals(float MPa) {  
        return MPa * 1e6;  
    }
    float gigapascalsToPascals(float GPa) {  
        return GPa * 1e9;  
    }

    float rpmToRadPerSec(float rpm) {  
        return rpm * (2 * pi) / 60.0;  
    }
    float degreesToRad(float degrees) {  
        return degrees * (pi / 180.0);  
    }
    float revolutionsToRad(float revolutions) {  
        return revolutions * 2 * pi;  
    }
    float hoursToSeconds(float hours) {  
        return hours * 3600.0;  
    }
    float minutesToSeconds(float minutes) {  
        return minutes * 60.0;  
    }
    float daysToHours(float days) {  
        return days * 24.0;  
    }
    float weeksToDays(float weeks) {  
        return weeks * 7.0;  
    }
    float yearsToDays(float years) {  
        return years * 365.25;  
    }


// Kinematics and Projectile Motion Calculators
    void calculatespeed(float &distance, float &time, float &speed) {
        speed = distance / time;
    }
    void calculatevelocity(float &displacement, float &time, float &velocity) {
        velocity = displacement / time;
    }
    void calculatedistance(float &speed, float &time, float &distance) {
        distance = speed * time;
    }
    void
    calculatetime(float &distance, float &speed, float &time) {
        time = distance / speed;
    }
    void calculatedisplacement(float &velocity, float &time, float &displacement) {
        displacement = velocity * time;
    }
    void calculateacceleration(float &changeInVelocity, float &time, float &acceleration) {
        acceleration = changeInVelocity / time;
    }
    void calculatechangeInVelocity(float &acceleration, float &time, float &changeInVelocity) {
        changeInVelocity = acceleration * time;
    }
    void calculatefinalvelocity(float &initialVelocity, float &acceleration, float &time, float &finalVelocity) {
        finalVelocity = initialVelocity + (acceleration * time);
    }
    void calculatedisplacementWithAcceleration(float &initialVelocity, float &time, float &acceleration, float &displacement) {
        displacement = (initialVelocity * time) + (0.5 * acceleration * time * time);
    }
    void calculatedistanceatnthsecond(float &initialVelocity, float &acceleration, int n, float &distance) {
        distance = initialVelocity + (0.5 * acceleration * (2*n - 1));
    }
    void calculatefinalvelocitySquared(float &initialVelocity, float &acceleration, float &displacement, float &finalVelocitySquared) {
        finalVelocitySquared = (initialVelocity * initialVelocity) + (2 * acceleration * displacement);
    }
    void calculateTimeOfFlight(float &initialVelocity, float &angleInDegrees, float &timeOfFlight) {
        float angleInRadians = angleInDegrees * (pi / 180.0);
        timeOfFlight = (2 * initialVelocity * sin(angleInRadians)) / G0;
    }
    void calculateHorizontalRange(float &initialVelocity, float &angleInDegrees, float &range) {
        float angleInRadians = angleInDegrees * (pi / 180.0);
        range = (initialVelocity * initialVelocity * sin(2 * angleInRadians)) / G0;
    }
    void calculateMaximumHeight(float &initialVelocity, float &angleInDegrees, float &maxHeight) {
        float angleInRadians = angleInDegrees * (pi / 180.0);
        maxHeight = (initialVelocity * initialVelocity * sin(angleInRadians) * sin(angleInRadians)) / (2 * G0);
    }
    void equationoftrajectory(float &initialVelocity, float &angleInDegrees, float &x, float &y) {
        float angleInRadians = angleInDegrees * (pi / 180.0);
        y = x * tan(angleInRadians) - (G0 * x * x) / (2 * initialVelocity * initialVelocity * cos(angleInRadians) * cos(angleInRadians));
    }
    
    //Dynamics Calculators
    void calculateForce(float &mass, float &acceleration, float &force) {
        force = mass * acceleration;
    }
    void calculateMass(float &force, float &acceleration, float &mass) {
        mass = force / acceleration;
    }  
    void calculateAcceleration(float &force, float &mass, float &acceleration) {
        acceleration = force / mass;
    }   
    void calculateWeight(float &mass, float &weight) {
        weight = mass * G0;
    }
    void calculateForceofspring(float &springConstant, float &displacement, float &force) {
        force = springConstant * displacement;
    }
    void calculateTensionInStringduetoconstrainedrelationship(float &mass1, float &mass2, float &acceleration, float &tension) {
        tension = 2 * mass1 * mass2 * G0 / (mass1 + mass2);
    }  
    void calculateaccelerationduetoconstrainedrelationship(float &mass1, float &mass2, float &tension, float &acceleration) {
        acceleration = tension * (mass1 - mass2) / (mass1 + mass2);
    }
    void calculatefrictionalforce(float &coefficientoffriction, float &normalforce, float &frictionalforce) {
        frictionalforce = coefficientoffriction * normalforce;
    }
    void calculatepseudoforceinfictitiousframe(float &mass, float &acceleration, float &pseudoforce) {
        pseudoforce = mass * acceleration;
    }
    void calculateImpulse(float &force, float &time, float &impulse) {
        impulse = force * time;
    }


    //Tui 
    void unitConversionMenu() {
        bool running = true;
        while(running) {
            cout << "\n=== Unit Conversion Menu ===" << endl;
            cout << "1. Length Conversion" << endl;
            cout << "2. Energy Conversion" << endl;
            cout << "3. Temperature Conversion" << endl;
            cout << "4. Pressure Conversion" << endl;
            cout << "5. Back to Main Menu" << endl;
            int choice;
            cin >> choice;
            
            float input, output;
            switch(choice) {
                case 1: {
                    cout << "1. Meters to Feet\n2. Feet to Meters\n3. Kilometers to Miles\n4. Miles to Kilometers\n";
                    int subChoice;
                    cin >> subChoice;
                    cout << "Enter value: ";
                    cin >> input;
                    if(subChoice == 1) output = input / 0.3048;
                    else if(subChoice == 2) output = feetToMeters(input);
                    else if(subChoice == 3) output = input / 1.60934;
                    else if(subChoice == 4) output = milesToMeters(input) / 1609.34;
                    cout << "Result: " << output << endl;
                    break;
                }
                case 2: {
                    cout << "1. Joules to eV\n2. eV to Joules\n3. Calories to Joules\n4. kWh to Joules\n";
                    int subChoice;
                    cin >> subChoice;
                    cout << "Enter value: ";
                    cin >> input;
                    if(subChoice == 1) output = input / 1.60218e-19;
                    else if(subChoice == 2) output = evtojoules(input);
                    else if(subChoice == 3) output = caloriesToJoules(input);
                    else if(subChoice == 4) output = kwhToJoules(input);
                    cout << "Result: " << output << endl;
                    break;
                }
                case 3: {
                    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin\n4. Kelvin to Celsius\n";
                    int subChoice;
                    cin >> subChoice;
                    cout << "Enter value: ";
                    cin >> input;
                    if(subChoice == 1) output = celsiusToFarenheit(input);
                    else if(subChoice == 2) output = farenheitToCelsius(input);
                    else if(subChoice == 3) output = celsiusToKelvin(input);
                    else if(subChoice == 4) output = kelvinToCelsius(input);
                    cout << "Result: " << output << endl;
                    break;
                }
                case 4: {
                    cout << "1. Pascals to atm\n2. atm to Pascals\n3. Pascals to Bar\n4. Bar to Pascals\n";
                    int subChoice;
                    cin >> subChoice;
                    cout << "Enter value: ";
                    cin >> input;
                    if(subChoice == 1) output = input / 101325.0;
                    else if(subChoice == 2) output = atmToPascals(input);
                    else if(subChoice == 3) output = input / 100000.0;
                    else if(subChoice == 4) output = barToPascals(input);
                    cout << "Result: " << output << endl;
                    break;
                }
                case 5:
                    running = false;  // Return to main instead of calling main()
                    break;
                default:
                    cout << "Invalid choice.\n";
            }
        }
    }

    void kinematicsMenu() {
        cout << "\n=== Kinematics Menu ===" << endl;
        cout << "1. Calculate Speed" << endl;
        cout << "2. Calculate Velocity" << endl;
        cout << "3. Calculate Acceleration" << endl;
        cout << "4. Calculate Final Velocity" << endl;
        cout << "5. Projectile Motion - Time of Flight" << endl;
        cout << "6. Projectile Motion - Range" << endl;
        cout << "7. Projectile Motion - Max Height" << endl;
        cout << "8. Back to Main Menu" << endl;
        int choice;
        cin >> choice;
        
        float distance, time, speed, displacement, velocity, changeInVelocity, acceleration, initialVelocity, finalVelocity, angle;
        switch(choice) {
            case 1:
                cout << "Enter distance (m): ";
                cin >> distance;
                cout << "Enter time (s): ";
                cin >> time;
                calculatespeed(distance, time, speed);
                cout << "Speed: " << speed << " m/s" << endl;
                break;
            case 2:
                cout << "Enter displacement (m): ";
                cin >> displacement;
                cout << "Enter time (s): ";
                cin >> time;
                calculatevelocity(displacement, time, velocity);
                cout << "Velocity: " << velocity << " m/s" << endl;
                break;
            case 3:
                cout << "Enter change in velocity (m/s): ";
                cin >> changeInVelocity;
                cout << "Enter time (s): ";
                cin >> time;
                calculateacceleration(changeInVelocity, time, acceleration);
                cout << "Acceleration: " << acceleration << " m/s²" << endl;
                break;
            case 4:
                cout << "Enter initial velocity (m/s): ";
                cin >> initialVelocity;
                cout << "Enter acceleration (m/s²): ";
                cin >> acceleration;
                cout << "Enter time (s): ";
                cin >> time;
                calculatefinalvelocity(initialVelocity, acceleration, time, finalVelocity);
                cout << "Final Velocity: " << finalVelocity << " m/s" << endl;
                break;
            case 5:
                cout << "Enter initial velocity (m/s): ";
                cin >> initialVelocity;
                cout << "Enter angle (degrees): ";
                cin >> angle;
                calculateTimeOfFlight(initialVelocity, angle, time);
                cout << "Time of Flight: " << time << " s" << endl;
                break;
            case 6:
                cout << "Enter initial velocity (m/s): ";
                cin >> initialVelocity;
                cout << "Enter angle (degrees): ";
                cin >> angle;
                calculateHorizontalRange(initialVelocity, angle, distance);
                cout << "Range: " << distance << " m" << endl;
                break;
            case 7:
                cout << "Enter initial velocity (m/s): ";
                cin >> initialVelocity;
                cout << "Enter angle (degrees): ";
                cin >> angle;
                calculateMaximumHeight(initialVelocity, angle, displacement);
                cout << "Maximum Height: " << displacement << " m" << endl;
                break;
            case 8:
                main();
                break;
            default:
                cout << "Invalid choice.\n";
        }
    }

    void dynamicsMenu() {
        cout << "\n=== Dynamics Menu ===" << endl;
        cout << "1. Calculate Force" << endl;
        cout << "2. Calculate Mass" << endl;
        cout << "3. Calculate Acceleration" << endl;
        cout << "4. Calculate Weight" << endl;
        cout << "5. Spring Force (Hooke's Law)" << endl;
        cout << "6. Frictional Force" << endl;
        cout << "7. Impulse" << endl;
        cout << "8. Back to Main Menu" << endl;
        int choice;
        cin >> choice;
        
        float mass, acceleration, force, weight, springConstant, displacement, coefficientOfFriction, normalForce, frictionalForce, time, impulse;
        switch(choice) {
            case 1:
                cout << "Enter mass (kg): ";
                cin >> mass;
                cout << "Enter acceleration (m/s²): ";
                cin >> acceleration;
                calculateForce(mass, acceleration, force);
                cout << "Force: " << force << " N" << endl;
                break;
            case 2:
                cout << "Enter force (N): ";
                cin >> force;
                cout << "Enter acceleration (m/s²): ";
                cin >> acceleration;
                calculateMass(force, acceleration, mass);
                cout << "Mass: " << mass << " kg" << endl;
                break;
            case 3:
                cout << "Enter force (N): ";
                cin >> force;
                cout << "Enter mass (kg): ";
                cin >> mass;
                calculateAcceleration(force, mass, acceleration);
                cout << "Acceleration: " << acceleration << " m/s²" << endl;
                break;
            case 4:
                cout << "Enter mass (kg): ";
                cin >> mass;
                calculateWeight(mass, weight);
                cout << "Weight: " << weight << " N" << endl;
                break;
            case 5:
                cout << "Enter spring constant (N/m): ";
                cin >> springConstant;
                cout << "Enter displacement (m): ";
                cin >> displacement;
                calculateForceofspring(springConstant, displacement, force);
                cout << "Spring Force: " << force << " N" << endl;
                break;
            case 6:
                cout << "Enter coefficient of friction: ";
                cin >> coefficientOfFriction;
                cout << "Enter normal force (N): ";
                cin >> normalForce;
                calculatefrictionalforce(coefficientOfFriction, normalForce, frictionalForce);
                cout << "Frictional Force: " << frictionalForce << " N" << endl;
                break;
            case 7:
                cout << "Enter force (N): ";
                cin >> force;
                cout << "Enter time (s): ";
                cin >> time;
                calculateImpulse(force, time, impulse);
                cout << "Impulse: " << impulse << " N·s" << endl;
                break;
            case 8:
                main();
                break;
            default:
                cout << "Invalid choice.\n";
        }
    }

    void centerOfMassMenu() {
        cout << "\n=== Center of Mass Menu ===" << endl;
        cout << "Feature coming soon!" << endl;
    }

    int main() {
        cout << "What would you like to calculate?" << endl;
        cout << "1. Unit Conversion" << endl;
        cout << "2. Kinematics and Projectile Motion" << endl;
        cout << "3. Dynamics" << endl;
        cout << "4. Exit" << endl;
        int choice;
        cin >> choice;
        switch(choice) {
            case 1:
                unitConversionMenu();
                break;
            case 2:
                kinematicsMenu();
                break;
            case 3:
                dynamicsMenu();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
        return 0;
    }
