#include "Player.h"

Player::Player(std::string name, int rating, std::string pos) :
    name {name}, rating {rating}, pos {pos} {
    }

Player::~Player() {}

std::ostream &operator<<(std::ostream &os, const Player &p)
{
    os << "Player " << p.name << " plays positon "  << p.pos << " and has rating " << p.rating << std::endl;
    return os;
}
