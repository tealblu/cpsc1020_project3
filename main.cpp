#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main() {
    int cardChoice {0};

  // 1. Create a deck of cards and shuffle it.
    Deck deckOfCards;
    deckOfCards.shuffle();

    Hand testHand(deckOfCards, 5);

    Player human(deckOfCards, 5);
  // 2. Create two players, each one with 5 cards in their hand.
  // 3. Play five rounds. In each round:
  //    - Have computer deal a card from their hand.
  //    - Show human their hand of cards so that they can make a selection.
    cout << "Your hand:" << testHand.printHand() << endl;
    cout << "Which card do you want to play? ";
    cin >> cardChoice;
  //    - Have human deal their card. 
    cout << "You played: " << testHand.dealCard(cardChoice).printCard() << endl;
  //    - Determine who won the round and update points accordingly.
  //    - Print results for current round.
  // 4. Print final game results.  
      
  



  //TESTING CODE

    cout << testHand.printHand() << endl;

  return 0;
}
