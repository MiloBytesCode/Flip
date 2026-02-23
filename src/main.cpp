/* ========================================================================= */
// 11-zogwidrouhua-2a
//
// PROJECT FLIP
//
// The runtime for Flip Project 2 Part A
/* ========================================================================= */

#include <iostream>
#include "deck.h"
#include "card.h"
using namespace std;


int main()
{
    // Before Shuffle
    cout << "><><>< Fresh Deck ><><><\n";
    deck standard_deck;
    cout << standard_deck;

    // After Shuffle
    standard_deck.shuffle();
    cout << standard_deck;
    
    return 0;
} // end main