/* ========================================================================= */
// The CARD class header files
//
// desc desc desc desc
// 
/* ========================================================================= */

#pragma once

#include <string>
#include <iostream>

class card 
{
    public:
        card(std::string suit, int faceVal);

        int getValue() const;
        void setValue(int fV);

        std::string getSuit() const;
        void setSuit(std::string s);

        friend std::ostream& operator<<(std::ostream& ostr, const card& c);

    private:
        std::string suit;
        int faceVal;

};


