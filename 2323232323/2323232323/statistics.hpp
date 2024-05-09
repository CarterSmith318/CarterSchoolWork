#ifndef STATISTICS_H
#define STATISTICS_H

class StatisticsCalculator {
public:
    void calculateMeanAndStdDev(double numbers[4], double& mean, double& std_deviation) {
        double sum = 0;
        // Calculate mean
        for (int i = 0; i < 4; ++i) {
            sum += numbers[i];
        }
        mean = sum / 4;

        // Calculate variance and standard deviation
        sum = 0;
        for (int i = 0; i < 4; ++i) {
            sum += pow(numbers[i] - mean, 2);
        }
        double variance = sum / 4;
        std_deviation = sqrt(variance);
    }
};

#endif // STATISTICS_H
