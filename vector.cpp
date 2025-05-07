#include <iostream>
#include <vector>
#include <algorithm> // for std::sort and std::find

int main() {
    // Step 1: Initialize a vector with some numbers
    std::vector<int> numbers;
    numbers.push_back(42);
    numbers.push_back(15);
    numbers.push_back(23);
    numbers.push_back(8);
    numbers.push_back(16);

    // Step 2: Print the numbers
    std::cout << "Original numbers: ";
    for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Step 3: Sort the vector in ascending order
    // NOTE: .begin() and .end() are iterators!!
    std::sort(numbers.begin(), numbers.end());

    // Task: Write code here to find the index of the number 23 in the sorted vector
    // Hint: Use a loop or std::find from <algorithm>
    // YOUR TASK HERE
    

    // Step 4: Print the sorted numbers
    std::cout << "Sorted numbers: ";
    for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}