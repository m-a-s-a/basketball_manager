#ifndef _TEAM_H_
#define _TEAM_H_
#include <string>
#include <iostream>
#include <vector>
#include "Player.h"

class Team 
{
    friend std::ostream &operator<<(std::ostream &os, const Team &team);
    private:
        static constexpr const char * team_name = "unnamed_team";
        std::vector<Player> team {};
    protected:
        std::string name;
    public:
        Team(std::string name = team_name);
        void add_player(Player new_signing);
        ~Team();
};

#endif