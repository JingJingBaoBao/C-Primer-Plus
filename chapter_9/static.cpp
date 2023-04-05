#include <iostream>
const int ArSize=10;

void strcount(const char* str);

int main()
{
    char input[ArSize];
    char next;

    std::cout << "Enter a line:\n";
    std::cin.get(input, ArSize);
    while (std::cin) {
        std::cin.get(next);
        while (next != '\n') {
            std::cin.get(next);
        }
        strcount(input);
        std::cout << "Enter next line (empty line to quit) :\n";
        std::cin.get(input, ArSize);
    }
    std::cout << "Bye!\n";
    return 0;
}

void strcount(const char* str)
{
    static int total = 0;
    int count = 0;
    std::cout << "\"" << str << "\" contains ";
    while (*str++) {
        count++;
    }
    total += count;
    std::cout << count << " characters\n";
    std::cout << total << " characters total\n";
}