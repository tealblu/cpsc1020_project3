#include "Deck.h"

#include <iostream>

Deck::Deck() //better way to do this?
{
    for(int i = 1; i <= 20; i++)
    {
        Card card(i, Card::purple);
        deck.push_back(card);

    }

    for(int i = 1; i <= 20; i++)
    {
        Card card(i, Card::orange);
        deck.push_back(card);

    }
}

void Deck::shuffle()
{
    srand(unsigned(time(0)));
    std::random_shuffle(deck.begin(), deck.end());

}

Card Deck::drawCard() //memory allocation issues?
{
    Card tempCard = deck.at(0);
    deck.erase(deck.begin());
    return tempCard;

}



int Deck::getDeckSize()
{

}




