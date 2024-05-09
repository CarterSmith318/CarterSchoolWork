#include <iostream>
#include "Cat.h"

int main() {
    // Create a cat with initial attributes
    Cat myCat("Long hair", "Black", "Button nose");

    // Display initial attributes
    std::cout << "Initial Cat Attributes:" << std::endl;
    std::cout << "Fur: " << myCat.getFur() << std::endl;
    std::cout << "Color: " << myCat.getColor() << std::endl;
    std::cout << "Nose Type: " << myCat.getNoseType() << std::endl;

    // Perform modifications
    myCat.geneticEngineering("Short hair");
    myCat.furDye("White");
    myCat.plasticSurgery("Snub nose");

    // Display modified attributes
    std::cout << "\nModified Cat Attributes:" << std::endl;
    std::cout << "Fur: " << myCat.getFur() << std::endl;
    std::cout << "Color: " << myCat.getColor() << std::endl;
    std::cout << "Nose Type: " << myCat.getNoseType() << std::endl;

    return 0;
}
