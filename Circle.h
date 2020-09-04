class Circle
{
    private: 
    double radius;

    public: 

    Circle(double r)
    {
        this->radius = r;
    }

    double getRadius()
    {return this->radius;}

    void setRadius(double r)
    {this->radius = r;}

    /*double calcArea();
    double calcDiameter();
    double calcVolume();
    double calcDensity(double mass);*/

};
