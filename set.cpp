#include <iostream>
#include <set>
#include <string>

int main() {
    // Step 1: Create a set of strings to store unique names
    std::set<std::string> names;

    // Step 2: Insert the following names into the set: "Alice", "Bob", "Charlie", "Alice", "Diana"
    names.insert("Alice");
    names.insert("Bob");
    names.insert("Charlie");
    names.insert("Alice"); // Duplicate insertion, set will ignore it
    names.insert("Diana");

    // Step 3: Print all names in the set
    std::cout << "Names in the set: ";
    for (std::set<std::string>::iterator it = names.begin(); it != names.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Task: Write code here to check if the name "Bob" exists in the set.
    // If it exists, remove "Bob" from the set. Print a message indicating the result.
    // YOUR TASK HERE

    // Step 4: Print the updated set
    std::cout << "Updated set: ";
    for (std::set<std::string>::iterator it = names.begin(); it != names.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}