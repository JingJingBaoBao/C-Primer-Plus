#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
    // using namespace std;
    std::ifstream fin;
    fin.open("./tobuy.txt");
    if (fin.is_open() == false) {
        std::cerr << "Failed\n";
        exit(EXIT_FAILURE);
    }

    std::string item;
    int count = 0;
    std::getline(fin, item, ':');
    while (fin) {
        ++count;
        std::cout << count << ": " << item << std::endl;
        std::getline(fin, item, ':');
    }
    std::cout << "Done\n";
    fin.close();

    return 0;


}
