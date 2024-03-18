#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_map>
#include <vector>

void generateRandomArray(std::vector<int>& array, int size, int a, int b) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        array.push_back(a + rand() % (b - a + 1));
    }
}

void printArray(const std::vector<int>& array) {
    std::cout << "array_id = {";
    for (size_t i = 0; i < array.size(); ++i) {
        std::cout << array[i];
        if (i != array.size() - 1)
            std::cout << ", ";
    }
    std::cout << "}\n";
}

void findRepeatedElements(const std::vector<int>& array) {
    std::unordered_map<int, int> countMap;
    for (int elem : array) {
        countMap[elem]++;
    }

    bool repeated = false;
    std::cout << "Repeated elements:\n";
    for (const auto& pair : countMap) {
        if (pair.second > 1) {
            repeated = true;
            std::cout << pair.first << " is repeated " << pair.second << " times.\n";
        }
    }
    if (!repeated) {
        std::cout << "No elements are repeated.\n";
    }
}

int main() {
    int size, a, b;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    std::cout << "Enter the range [a, b]: ";
    std::cin >> a >> b;

    std::vector<int> array;
    generateRandomArray(array, size, a, b);

    printArray(array);

    findRepeatedElements(array);

    return 0;
}
