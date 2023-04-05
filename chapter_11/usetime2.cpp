#include <iostream>
#include "mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time wedding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "wedding time = ";
    wedding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time = ";
    total = wedding + waxing;
    total.Show();
    cout << endl;

    diff = wedding - waxing;
    cout << "wedding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;
    cout << "Adjusted work time = ";
    adjusted.Show();
    cout << endl;

    return 0;
}

