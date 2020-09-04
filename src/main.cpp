#include <iostream>
#include "Circle.h"

using namespace std;

int main()
    {
        double radius; 
        double area;
        double diameter;
        double volume;
        double mass;
        double density;
        char answer;

        cout << endl << "Enter a radius: ";
        cin >> radius; 

        Circle *myCircle = new Circle(radius);

        cout << endl << "The circle's radius is: " << myCircle->getRadius() << endl;

        diameter = myCircle->calcDiameter();

        cout << "The circle's diameter is: " << diameter << endl;
        
        area = myCircle->calcArea();

        cout << "The circle's area is: " << area << "\n\n";

        cout << "Would you like to calculate spherical parameters? (y/n): ";

        cin >> answer;

        if (answer == 'y' || answer == 'Y')
        {
            cout << endl << "Enter the sphere's mass: ";
        
            cin >> mass;

            volume = myCircle->calcVolume();

            cout << "\nThe sphere's volume is: " << volume << endl;

            density = myCircle->calcDensity(mass, volume);

            cout << "The sphere's density is: " << density;
        }

        else if (answer == 'n' || answer == 'n')
        {
            cout << endl << "Thanks anyways!";
        }

        else 
        {
            cout << endl << "Invalid Input. Run the program again.";
        }

        cout << "\n\n";

        return 0;
    }
