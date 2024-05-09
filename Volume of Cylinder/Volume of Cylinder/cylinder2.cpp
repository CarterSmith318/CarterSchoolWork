#include "cylinderhead.hpp"
#include <cmath>

Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

double Cylinder::getRadius() const { return radius; }
double Cylinder::getHeight() const { return height; }

void Cylinder::setRadius(double r) { radius = r; }
void Cylinder::setHeight(double h) { height = h; }

// Calculate the volume of the cylinder using the formula V = ? * r^2 * h
double Cylinder::calculateVolume() const {
    return pi * radius * radius * height;
}

// Calculate the surface area of the cylinder using the formula A = 2?rh + 2?r^2
double Cylinder::calculateSurfaceArea() const {
    return 2 * pi * radius * (radius + height);
}
