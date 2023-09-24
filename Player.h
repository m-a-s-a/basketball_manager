#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player 
{
    friend std::ostream &operator<<(std::ostream &os, const Player &p);
    private:
        static constexpr const char * def_name = "new_player";
        static const int ovr_rating = -1;
        static constexpr const char * position = "unassigned";
    protected:
        std::string name;
        int rating;
        std::string pos;
    public:
        Player(std::string name = def_name, int rating = ovr_rating, std::string pos = position);
        ~Player();
};

#endif