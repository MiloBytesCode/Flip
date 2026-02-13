/* ========================================================================= */
// The DECK class implementation
//
// desc desc desc desc
// 
/* ========================================================================= */

#include "deck.h"
#include <iostream>
using namespace std;


deck::deck()
// deck deck deck deck deck deck
{
    string suits[4] = {"Club", "Diamond", "Heart", "Spade"};
    int suitsSize = sizeof(suits) / sizeof(suits[0]);

    for (int i = 0; i < suitsSize; i++)
    {
        for (int j = 1; j <= 14; j++) 
        {
            // append new node with stuff
        }
    }

}

void deck::shuffle()
// shuffle shuffle shuffle shuffle
{
    // crazy freaky algorithm goes here
}

ostream& operator<<(ostream& ostr, const deck& d)
// <<<<<<<< << < << <<< <<< << << ostr
{
    node<card> *curr;
    curr = d.front;

    while (curr != NULL)
    {
        ostr << curr->nodeValue << ",\n";
        curr = curr->next;
    }

    return ostr;
}