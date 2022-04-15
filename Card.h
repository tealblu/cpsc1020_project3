#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card
{
    public:
        enum Color {purple, orange};

        Card() = default;
        Card(int rank, Color color) 
            : rank(rank), color(color) {};

        std::string printCard();

        int getRank();
        Color getColor();
        int getValue();
        
    private:
        int rank {0};
        Color color = purple;
        int value {0};
        
};
  

#endif // CARD_H_
