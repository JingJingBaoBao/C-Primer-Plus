#include <iostream>
#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln,
    bool ht) : firstname(fn), lastname(fn), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln,
    bool ht) : rating(r), TableTennisPlayer(fn, ln, ht) {}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
    : TableTennisPlayer(tp), rating(r) {}

    