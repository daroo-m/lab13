#include <iostream>
#include <map>
#include <string>

int main() {
    // Step 1: Create a map to store student names as keys and their scores as values
    std::map<std::string, int> student_scores;

    // Step 2: Insert the following key-value pairs into the map:
    // "Alice" -> 85, "Bob" -> 90, "Charlie" -> 78, "Diana" -> 92
    student_scores["Alice"] = 85;
    student_scores["Bob"] = 90;
    student_scores["Charlie"] = 78;
    student_scores["Diana"] = 92;

    // Step 3: Print all students and their scores
    std::cout << "Student scores: " << std::endl;
    for (std::map<std::string, int>::iterator it = student_scores.begin(); it != student_scores.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Task: Write code to update Bob's score to 95, and then remove Charlie from the map.
    // Print appropriate messages indicating what has been updated/removed.
    // YOUR TASK HERE

    // Step 4: Print the updated map
    std::cout << "Updated student scores: " << std::endl;
    for (std::map<std::string, int>::iterator it = student_scores.begin(); it != student_scores.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}