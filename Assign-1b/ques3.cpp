#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>

int main() {
    std::string paragraph;
    std::cout << "Enter a paragraph:\n";
    std::getline(std::cin, paragraph);

    // Convert to lowercase for case-insensitive comparison
    std::transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);

    // Replace punctuation with spaces
    for (char& ch : paragraph) {
        if (ispunct(ch)) {
            ch = ' ';
        }
    }

    std::stringstream ss(paragraph);
    std::string word;
    std::map<std::string, int> wordCount;

    // Count word frequencies
    while (ss >> word) {
        wordCount[word]++;
    }

    // Print word frequencies
    std::cout << "\nWord Frequencies:\n";
    for (const auto& pair : wordCount) {
        std::cout << pair.first << " : " << pair.second << "\n";
    }

    return 0;
}
