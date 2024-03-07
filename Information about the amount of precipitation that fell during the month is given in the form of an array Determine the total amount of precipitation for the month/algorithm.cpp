#include <iostream>

// Function to calculate total precipitation
double getTotal(double precipitation[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += precipitation[i];
    }
    return total;
}

int main() {
    // Example array of precipitation data
    double precipitation[] = { 2.5, 3.1, 1.7, 2.3, 0.8, 1.2, 3.5, 2.0, 1.5, 2.8, 1.0, 2.2 };
    int size = sizeof(precipitation) / sizeof(precipitation[0]);

    // Calculate total precipitation
    double totalPrecipitation = getTotal(precipitation, size);

    // Output the result
    std::cout << "Total precipitation for the month: " << totalPrecipitation << " units" << std::endl;

    return 0;
}