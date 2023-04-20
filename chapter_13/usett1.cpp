#include <iostream>
#include "tabtenn1.h"

int main(void)
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boo", false);
    RatedPlayer rplayer1(1140, "Mallo", "Duck", true);
    rplayer1.Name();
    if (rplayer1.HasTable()) {
        cout << ": has\n";
    }
    else {
        cout << ": hasn't\n";
    }
    player1.Name();
    if (player1.HasTable()) {
        cout << ": has\n";
    }
    else {
        cout << ": hasn't\n";
    }

    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;

    RatedPlayer rplayer2(1212, player1);
    
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;

    return 0;
}