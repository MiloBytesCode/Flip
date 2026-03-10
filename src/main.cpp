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

/*
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

*/

// function to run the game
void playFlip()
{
    // make and shuffle main deck
    deck main_deck;
    cout << "Main Deck Created\n";
    cout << main_deck;

    main_deck.shuffle();

    cout << "Main Deck Shuffled\n";
    cout << main_deck;

    
    deck hand_deck(false); // make empty hand deck
    
    // make hand deck and move top 24 cards into it
    for (int i = 0; i < 24; i++)
    {
        hand_deck.replace(main_deck.deal());
    }

    // print both decks 
    cout << "Current Hand Deck\n";
    cout << hand_deck;

    cout << "Remaining Main Deck\n";
    cout << main_deck;

    // Game loop
    cout << "Game Start!\n";
    int numberOfFlips = 0;
    while (true){
        node<card>* flipped = hand_deck.deal(); // flip top card of hand deck

        if (flipped == nullptr) // end game when hand deck empty
    {
        break;
    }
        // print flipped card and increase number of flips
        cout << "Flipped card: " << flipped->nodeValue;
        numberOfFlips++;

        delete flipped; // part 6 bonus ensure card is only flipped once  
    }

    cout << "Game Over!\nTotal Flips:" << numberOfFlips << endl;
    cout << "Remaining hand deck:\n" << hand_deck; // check that hand deck is empty
    


}    

int main()
{
    playFlip();
    return 0;
} 