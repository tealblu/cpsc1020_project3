#include "Card.h"

std::string Card::printCard()
{
    if(color == purple)
        { return "purple:" + std::to_string(rank); }
    else
        { return "orange:" + std::to_string(rank); }
}


int Card::getRank()
    { return rank; }

Card::Color Card::getColor()
{
    return color;
}