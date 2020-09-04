#include <iostream>
#include "Circle.h"

using namespace std;

int main()
    {
        double radius; 

        cout << "Enter the circle's radius: ";
        cin >> radius; 

        Circle *myCircle = new Circle(radius);

        cout << "The circle's radius is: " << myCircle->getRadius();

        return 0;
    }
