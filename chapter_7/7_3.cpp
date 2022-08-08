#include <iostream>
using namespace std;

void n_chars(char, int);

int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q') {
        cout << "Enter a int: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    
    return 0;
}

void n_chars(char c, int n)
{
    while (n--)
    {
        cout << c;
    }
    
}