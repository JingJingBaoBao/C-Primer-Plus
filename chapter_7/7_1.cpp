#include <iostream>

void simple();

int main(void)
{
    using namespace std;
    cout << "main() will the simple() function\n";
    simple();
    cout << "main() finish the simple() function\n";
    return 0;
}

void simple()
{
    using namespace std;
    cout << "I'm but a simple funtion.\n";
}