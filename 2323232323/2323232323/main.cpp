#include <iostream>
#include <fstream>
#include "statistics.hpp"

using namespace std;

int main() {
    StatisticsCalculator calculator;
    double numbers[4];
    double mean, std_deviation;

    // Open input file
    ifstream inputFile("InMeanStd.dat");

    if (!inputFile) {
        cerr << "Error: Cannot open input file." << endl;
        return 1;
    }

    // Read numbers from input file
    for (int i = 0; i < 4; ++i) {
        if (!(inputFile >> numbers[i])) {
            cerr << "Error: Invalid input format in input file." << endl;
            return 1;
        }
    }

    // Close input file
    inputFile.close();

    // Calculate mean and standard deviation using the class method
    calculator.calculateMeanAndStdDev(numbers, mean, std_deviation);

    // Open output file
    ofstream outputFile("OutMeanStd.dat");

    if (!outputFile) {
        cerr << "Error: Cannot open output file." << endl;
        return 1;
    }

    // Write mean and standard deviation to output file
    outputFile << "Mean: " << mean << endl;
    outputFile << "Standard Deviation: " << std_deviation << endl;

    // Close output file
    outputFile.close();

    // Prompt user for new numbers
    cout << "Enter new 4 numbers:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Calculate mean and standard deviation for new numbers
    calculator.calculateMeanAndStdDev(numbers, mean, std_deviation);

    // Print results to the screen
    cout << "Entered numbers: ";
    for (int i = 0; i < 4; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << std_deviation << endl;

    return 0;
}
