/* ========================================================================= */
// The CARD class implementation 
//
// desc desc desc desc
// 
/* ========================================================================= */

#include "card.h"
using namespace std;


card::card(string s, int fV) 
// constr constr constr
{
    this->suit = s;
    this->faceVal = fV;
};

int card::getValue() const
// getval getval getval
{
    return faceVal;
}

void card::setValue(int fV)
// serve face card serve face card
{
    // check for valid input
    if (fV > 0 && fV < 14)
        this->faceVal = fV;
    else
        cout << "Invalid face value >:(\n";
}

std::string card::getSuit() const
// get suit get suit get suit
{
    return suit;
}

void card::setSuit(string s)
// setsuit setsuit setsuit
{
    this->suit = s;
}

std::ostream& operator<<(std::ostream& ostr, const card& c)
// overloaded op overloaded op overloaded op
{
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