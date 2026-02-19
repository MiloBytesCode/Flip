/* ========================================================================= */
// 11-zogwidrouhua-1a
//
// The CARD class implementation 
//
// Contains the entire implementation for the CARD class, including the 
// contructor and relevant functionality
/* ========================================================================= */

#include "card.h"
using namespace std;


card::card(string s, int fV) 
// takes a suit (s) and face value (fV) and instatializes a card with the
// suit and face value
{
    this->suit = s;
    this->faceVal = fV;
}

int card::getValue() const
// returns the face value of the card without modifying values
{
    return faceVal;
}

void card::setValue(int fV)
// takes value and verifies it as a valid playing card value (1,13), then sets
// the card face value to the given value
{
    // check for valid input (Ace is 1, King is 13)
    if (fV > 0 && fV < 14)
        this->faceVal = fV;
    else
        cout << "~~~ Invalid face value >:( ~~~\n";
}

std::string card::getSuit() const
// returns the suit of the card as a string without modifying values
{
    return suit;
}

void card::setSuit(string s)
// takes in string and sets the suit value to the input string
{
    this->suit = s;
}

std::ostream& operator<<(std::ostream& ostr, const card& c)
// takes in card as a rhs value and translates face value to Ace, King, Queen,
// or Jack before passing to ostream
{
    // based on fV, append card name to ostream
    switch(c.faceVal) 
    {
        case 11:
            ostr << "Jack";
            break;
        
        case 12:
            ostr << "Queen";
            break;
        
        case 13:
            ostr << "King";
            break;

        case 1:
            ostr << "Ace";
            break;

        default:
            ostr << c.faceVal;
    }
        
    ostr << " of " << c.suit << "s\n";

    return ostr;
}