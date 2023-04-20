#include <iostream>
#include "tabtenn0.h"

int main(void)
{
    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable()) {
        cout << " has\n";
    }
    else {
        cout << " hasn't\n";
    }
    player2.Name();
    if (player2.HasTable()) {
        cout << " has\n";
    }
    else {
        cout << " hasn't\n";
    }

    return 0;
}