#include "Deck.h"

Deck::Deck()
{
    for(int i = 1; i <= 20; i++)
    {
        Card card(i, Card::purple);
        deck.push_back(card);
    }
}

void Deck::shuffle()
{
    srand(unsigned(time(0)));
    std::random_shuffle(deck.begin(), deck.end());
}

Card Deck::drawCard()
{

}

int Deck::getDeckSize()
{

}




