#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card
{
    public:
        enum Color {purple, orange};
    private:

        int rank {0}; //between 1 and 10
        Color color = purple;
        int value {0};
    public:
        Card() = default;
        Card(int rank, Color color) 
            : rank(rank), color(color) {value = (color + 1) * rank;};

        std::string printCard(); //returns in format "color:rank"

        int getRank();
        Color getColor();
        int getValue();
        

        
};
  

#endif // CARD_H_
