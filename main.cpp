#include <iostream>
#include <string>
#include "Player.h"
#include "Team.h"

using namespace std;

int main()
{
    Team partizan ("Partizan");
    Player center ("Divac", 99, "C");
    Player power_forward ("Milojevic", 99, "PF");
    Player small_forward ("Kecman", 99, "SF");
    Player shooting_guard ("Danilovic", 99, "SG");
    Player guard ("Djordjevic", 99, "G");

    partizan.add_player(center);
    partizan.add_player(power_forward);
    partizan.add_player(small_forward);
    partizan.add_player(shooting_guard);
    partizan.add_player(guard);


    cout << partizan << endl;
    return 0;
}

