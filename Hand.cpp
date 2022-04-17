#include "Hand.h"

Hand::Hand(Deck deck, int N)
{
    for(int i = 0; i < N; i++)
    {
        hand.push_back(deck.drawCard());
    }
}

//uses a sstream to print PLAYER'S hand
std::string Hand::printHand()
{
    std::stringstream handReturn;

    for(int i = 0; i < hand.size(); i++)
    {
        handReturn << " [" << i + 1 << "] " << hand.at(i).printCard();
    }
    return handReturn.str();
}

Card Hand::dealCard(int num)
{
    Card tempDeal = hand.at(num - 1);
    hand.erase(hand.at(num - 1));

}

int Hand::getHandSize()
{
    return hand.size();
}