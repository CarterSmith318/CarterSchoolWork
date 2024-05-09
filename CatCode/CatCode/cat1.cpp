#include "Cat.h"

Cat::Cat(std::string furType, std::string catColor, std::string nose)
    : fur(furType), color(catColor), noseType(nose) {}

std::string Cat::getFur() const {
    return fur;
}

std::string Cat::getColor() const {
    return color;
}

std::string Cat::getNoseType() const {
    return noseType;
}

void Cat::geneticEngineering(std::string newFur) {
    fur = newFur;
}

void Cat::furDye(std::string newColor) {
    color = newColor;
}

void Cat::plasticSurgery(std::string newNose) {
    noseType = newNose;
}
