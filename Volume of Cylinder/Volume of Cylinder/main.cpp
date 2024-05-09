#include <iostream>
#include "cylinderhead.hpp"

int main() {
    // Create a Cylinder object with a radius of 5.0 and height of 10.0
    Cylinder myCylinder(5.0, 10.0);

    // Display the properties of the cylinder
    std::cout << "Cylinder Properties:" << std::endl;
    std::cout << "Radius: " << myCylinder.getRadius() << std::endl;
    std::cout << "Height: " << myCylinder.getHeight() << std::endl;
    std::cout << "Volume: " << myCylinder.calculateVolume() << std::endl;
    std::cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << std::endl;

    // Update the radius and height of the cylinder
    myCylinder.setRadius(6.0);
    myCylinder.setHeight(12.0);

    // Display the updated properties of the cylinder
    std::cout << "\nUpdated Cylinder Properties:" << std::endl;
    std::cout << "Radius: " << myCylinder.getRadius() << std::endl;
    std::cout << "Height: " << myCylinder.getHeight() << std::endl;
    std::cout << "Volume: " << myCylinder.calculateVolume() << std::endl;
    std::cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << std::endl;

    return 0;
}
