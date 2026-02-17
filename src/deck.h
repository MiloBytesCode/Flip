/* ========================================================================= */
// The DECK class header files
//
// desc desc desc desc
// 
/* ========================================================================= */

#pragma once

#include "card.h"
#include "d_node.h"
#include <iostream>
#include <string>


class deck
{
    public:
        deck();

        void shuffle();
        void AddCard(std::string s, int fV);
        
        friend std::ostream& operator<<(std::ostream& ostr, const deck& d);

    private:
        node<card>* front = nullptr; //head of LL

};