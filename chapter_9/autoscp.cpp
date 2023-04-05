#include <iostream>
void oil(int x);

int main()
{
    int texas = 31;
    int year = 2011;
    std::cout << "In main(), texas = " << texas << ", &texas = ";
    std::cout << &texas << std::endl;
    std::cout << "In main(), year = " << year << ", &year = ";
    std::cout << &year << std::endl;
    oil(texas);
    std::cout << "In main(), texas = " << texas << ", &texas = ";
    std::cout << &texas << std::endl;
    std::cout << "In main(), year = " << year << ", &year = ";
    std::cout << &year << std::endl;

    return 0;
}

void oil(int x)
{
    int texas = 5;
    std::cout << "In oil(), texas = " << texas << ", &texas = ";
    std::cout << &texas << std::endl;
    std::cout << "In oil(), x = " << x << ", &x = ";
    std::cout << &x << std::endl;
    {
        int texas = 113;
        std::cout << "In block, texas = " << texas << ", &texas = ";
        std::cout << &texas << std::endl;
        std::cout << "In block, x = " << x << ", &x = ";
        std::cout << &x << std::endl;
    }
    std::cout << "Post block, texas = " << texas << ", &texas = ";
    std::cout << &texas << std::endl;
}
