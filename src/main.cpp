#include <iostream>
#include "Circle.h"

using namespace std;

int main()
    {
        double radius; 
        double area;

        cout << endl << "Enter the circle's radius: ";
        cin >> radius; 

        Circle *myCircle = new Circle(radius);

        cout << endl << "The circle's radius is: " << myCircle->getRadius() << endl;

        area = myCircle->calcArea();

        cout << "The circle's area is: " << area << endl;

        cout << "\n\n";

        return 0;
    }
