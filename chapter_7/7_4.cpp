#include <iostream>
long double probability(unsigned numbers, unsigned picks);
using namespace std;

int main(void)
{
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed\n";
    while ((cin >> total >> choices) && choices <= total) {
        cout << "you have one chance ";
        cout << probability(total, choices);
        cout << " next two" << endl;
    }
    cout << "bye" << endl;

    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    return result;
}