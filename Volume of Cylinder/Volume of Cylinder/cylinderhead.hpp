#ifndef CYLINDER_H
#define CYLINDER_H

const double pi = 3.14159265358979323846;

class Cylinder {
private:
    double radius;
    double height;

public:
    // Constructor to initialize the radius and height of the cylinder
    Cylinder(double r, double h);

    // Getter methods to retrieve the radius and height of the cylinder
    double getRadius() const;
    double getHeight() const;

    // Setter methods to set the radius and height of the cylinder
    void setRadius(double r);
    void setHeight(double h);

    // Method to calculate the volume of the cylinder
    double calculateVolume() const;

    // Method to calculate the surface area of the cylinder
    double calculateSurfaceArea() const;
};

#endif // CYLINDER_H
