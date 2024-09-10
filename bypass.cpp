#include <iostream>
#include <string>
#include <vector>

// Define constants
const std::string SUCCESS_MESSAGE = "Bypass successful";
const int REPEAT_COUNT = 5;

// Function declarations
void printMessage(const std::string& message);
void processMessage(const std::string& message);
std::string generateMessage(const std::string& baseMessage, int repeatCount);
std::vector<std::string> extractWords(const std::string& message);
std::string joinWords(const std::vector<std::string>& words);

// Main function
int main() {
    // Step 1: Prepare the message
    std::string baseMessage = SUCCESS_MESSAGE;
    
    // Step 2: Process the message
    processMessage(baseMessage);
    
    // Step 3: Generate the final message
    std::string finalMessage = generateMessage(baseMessage, REPEAT_COUNT);
    
    // Step 4: Extract words from the final message
    std::vector<std::string> words = extractWords(finalMessage);
    
    // Step 5: Join words back into a single message
    std::string joinedMessage = joinWords(words);
    
    // Step 6: Print the final message
    printMessage(joinedMessage);
    
    return 0;
}

// Function to print a message
void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

// Function to process the message (dummy processing)
void processMessage(const std::string& message) {
    // For demonstration purposes, just printing the processed message
    std::cout << "Processing message: " << message << std::endl;
}

// Function to generate a message with repeated parts
std::string generateMessage(const std::string& baseMessage, int repeatCount) {
    std::string result;
    for (int i = 0; i < repeatCount; ++i) {
        result += baseMessage;
        if (i < repeatCount - 1) {
            result += " ";
        }
    }
    return result;
}

// Function to extract words from a message
std::vector<std::string> extractWords(const std::string& message) {
    std::vector<std::string> words;
    std::string word;
    for (char ch : message) {
        if (ch == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += ch;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

// Function to join words into a single message
std::string joinWords(const std::vector<std::string>& words) {
    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    return result;
}
