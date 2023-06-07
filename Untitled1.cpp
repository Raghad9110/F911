double calculateFinalVolume(double initialVolume, double initialTemp, double finalTemp) {
 // Calculate final volume using Charles's Law formula
 double finalVolume = (initialVolume * finalTemp) / initialTemp;

 return finalVolume;
}
//
double calculateKineticEnergy(double mass, double velocity) {
 // Calculate kinetic energy using formula
 double ke = 0.5 * mass * velocity * velocity;

 return ke;
}
/////
double calculateWork(double force, double distance) {
 return force * distance;
}
/////
float calculatePE(float mass, float height) {
 const float gravity = 9.8;
 float potentialEnergy = mass * gravity * height;
 return potentialEnergy;
}
#include <iostream>
using namespace std;
int main() {
 int choice;

 cout << "Welcome to the program!\n";
 cout << "Please select an option from the menu below:\n\n";

 do {
 cout << "1. Option One(charles's law)\n";
 cout << "2. Option Two(kinetic energy formula)\n";
 cout << "3. Option Three(work's law)\n";
 cout << "4. Option four(potential energy law)\n";
 cout << "5. Exit Program\n\n";
 cin >> choice;
 switch(choice) {
 case 1:{
 double initialVolume, finalVolume;
 double initialTemp, finalTemp;

 cout << "Welcome to the Charles's Law calculator!\n";

 // Get user input for initial volume and temperature
 cout << "\nEnter the initial volume (in liters): ";
 cin >> initialVolume;

 cout << "Enter the initial temperature (in Kelvin): ";
 cin >> initialTemp;
 cout << "Enter the new temperature (in Kelvin): ";
 cin >> finalTemp;
 // Call our function to calculate the result
 finalVolume = calculateFinalVolume(initialVolume,initialTemp,finalTemp);
 // Display result
 cout.precision(2);
 cout << "\nThe new Volume is: " << fixed << finalVolume<<" L"<<endl;
 } break;
 case 2:{
double mass, velocity;

 cout << "Welcome to the Kinetic Energy calculator!\n";

 // Get user input for mass and velocity
 cout << "\nEnter the object's mass (in kg): ";
 cin >> mass;
 cout << "Enter the object's velocity (in m/s): ";
 cin >> velocity;
 // Call our function to calculate the result
 double ke = calculateKineticEnergy(mass,velocity);
 // Display result
 cout.precision(2);
cout<<fixed<<"The Kinetic Energy is: "<<ke<<" J"<<endl;
 } break;
 case 3:{
 cout << "Welcome to the Work Calculator!" << endl;

 double f, d;
 cout << "Please enter the force applied in Newtons: ";
 cin >> f;
 cout << "Please enter the distance moved in meters: ";
 cin >> d;
 // Calculate and display the work
 double w = calculateWork(f, d);
 cout << "\nThe work done is: " << w <<" joules."<< endl;
 }break;
 case 4:{
 cout << "Welcome to the Potential Energy Calculator!" << endl;
 // Taking user input
 float m, h;
 cout << "Enter Mass (in kg): ";
 cin >> m;

cout << "Enter Height (in meters): ";
cin >> h;
// Calculating and displaying result
float pe = calculatePE(m, h);
cout << "\nThe Potential Energy of the object is: " << pe <<" joules"<< endl;
 }break;
 default:
 cout << "\nExiting program...\n";

 cout << "\nInvalid input, please try again.\n";
 }
 } while (choice != 5);
 return 0;
}
