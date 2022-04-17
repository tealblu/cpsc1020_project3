#include "Hand.h"

//pushes N cards from deck into hand
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
  //creates stream to return
    std::stringstream handReturn;

  //goes through all cards in vector and adds them to stream
    for(unsigned int i = 0; i < hand.size(); i++)
    {
        handReturn << " [" << i + 1 << "] " << hand.at(i).printCard();
    }

    return handReturn.str();
}

//deals card from players hand and removes it
Card Hand::dealCard(int num)
{

    Card tempDeal = hand.at(num - 1); //create temp card

  //removes card from hand and returns card 
    hand.erase(hand.begin() + num - 1);
    return tempDeal;

}

//returns size of player's hand
int Hand::getHandSize()
{
    return hand.size();
}