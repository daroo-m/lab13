#include <iostream>
#include <deque>
#include <algorithm> // for std::sort (but not directly applicable to deque)

int main() {
    // Step 1: Initialize a deque with some numbers
    std::deque<int> numbers;
    numbers.push_back(42);
    numbers.push_back(15);
    numbers.push_back(23);
    numbers.push_back(8);
    numbers.push_back(16);

    // Step 2: Print the numbers
    std::cout << "Original deque: ";
    for (std::deque<int>::size_type i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Step 3: Add a number to the front and back
    numbers.push_front(5); // Add 5 to the front
    numbers.push_back(50); // Add 50 to the back

    // Step 4: Sort the deque
    // Hint: Since std::sort doesn't work directly on deques, copy the contents to a vector
    // YOUR TASK: Sort the deque by copying it to a vector, sorting it, and copying it back.
    // YOUR TASK HERE

    // Step 5: Print the sorted deque
    std::cout << "Sorted deque: ";
    for (std::deque<int>::size_type i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}