#include <iostream>
#include <string>
#include <vector>

const std::string SUCCESS_MESSAGE = "Bypass successful";
const int REPEAT_COUNT = 5;

void printMessage(const std::string& message);
void processMessage(const std::string& message);
std::string generateMessage(const std::string& baseMessage, int repeatCount);
std::vector<std::string> extractWords(const std::string& message);
std::string joinWords(const std::vector<std::string>& words);

int main() {
    
    std::string baseMessage = SUCCESS_MESSAGE;
    
   
    processMessage(baseMessage);
    
    
    std::string finalMessage = generateMessage(baseMessage, REPEAT_COUNT);
    
    
    std::vector<std::string> words = extractWords(finalMessage);
    
    
    std::string joinedMessage = joinWords(words);
    
    // Step 6: Print the final message
    printMessage(joinedMessage);
    
    return 0;
}


void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}


void processMessage(const std::string& message) {
    // For demonstration purposes, just printing the processed message
    std::cout << "Processing message: " << message << std::endl;

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

// extract words from a message
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

// join words into a single message
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
