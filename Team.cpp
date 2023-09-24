#include "Team.h"

Team::Team(std::string name) :
    name {name} {
    }

Team::~Team() {}

std::ostream &operator<<(std::ostream &os, const Team &team)
{
    os << "Team " << team.name << " has players:" << std::endl;
    for (Player p : team.team)
        std::cout << p << ' ';
    return os;
}

void Team::add_player(Player new_signing)
{
    team.push_back(new_signing);
}