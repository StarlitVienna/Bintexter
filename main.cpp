#include <iostream>
#include <string.h>

// text to Ascii
void convert_ascii(std::string text, int result[]);

// ascii to binary
std::string convert_bin(int value);

int main() {
    std::string binary_text = "";
    std::string text = "";
    std::cout << "Text to be translated --> ";
    std::getline(std::cin, text);

    const int text_size = text.length();
    int ascii_result[text_size];
    memset(ascii_result, 0, sizeof(ascii_result));

    convert_ascii(text, ascii_result);

    /*
    std::cout << "\n";
    for (auto value : ascii_result) {
        std::cout << value << std::endl;
    }
    std::cout << "\n";
    */

    for (auto ascii : ascii_result) {
        binary_text += convert_bin(ascii) + " ";
    }

    //std::cout << "\n";
    std::cout << binary_text << std::endl;
}

void convert_ascii(std::string text, int *result) {
    for (int i = 0; i < text.length(); ++i) {
        //std::cout << static_cast<int>(text[i]) << std::endl;
        result[i] = static_cast<int>(text[i]);
    }
}

std::string convert_bin(int value) {
    std::string reverse_result = "";
    std::string result = "";
    while (value != 0) {
        int remainder = value % 2;
        value = value/2;
        reverse_result += std::to_string(remainder);
    }
    for (int i = reverse_result.length() - 1; i >= 0; --i) {
        result += reverse_result[i];
    }
    //std::cout << result << std::endl;
    return result;
}
