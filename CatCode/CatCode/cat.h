#pragma once
#ifndef CAT_H
#define CAT_H

#include <string>

class Cat {
private:
    std::string fur;
    std::string color;
    std::string noseType;

public:
    // Constructor
    Cat(std::string furType, std::string catColor, std::string nose);

    // Accessor methods
    std::string getFur() const;
    std::string getColor() const;
    std::string getNoseType() const;

    // Mutator methods
    void geneticEngineering(std::string newFur);
    void furDye(std::string newColor);
    void plasticSurgery(std::string newNose);
};

#endif
