/* ========================================================================= */
// The DECK class implementation
//
// desc desc desc desc
// 
/* ========================================================================= */

#include "deck.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
using namespace std;


deck::deck()
// deck deck deck deck deck deck
{
    string suits[4] = {"Club", "Diamond", "Heart", "Spade"};

    for (int i = 0; i < 4; i++)
    {
        for (int fV = 1; fV <= 13; fV++) 
        {
            AddCard(suits[i], fV);
        }
    }

}

void deck::AddCard(std::string s, int fV)
{// puts a new card on the front of the deck
    card new_card(s, fV); //makes a new card from passed in values
    front = new node<card>(new_card, front);  // creates new node that stores new_card and points to old front, while reassigning front to the new node
}

void deck::shuffle()
// shuffle shuffle shuffle shuffle
{
    cout << "\n--- Shuffle Shuffle ---\n\n";
    if(front->next == NULL)
    {
        return;
    }

    std::vector<node<card>*> cards; //makes a vector of nodes (of type card)
    node<card>* curr = front;

    while(curr != nullptr)
    {
        cards.push_back(curr);
        curr = curr->next;

    }

    //cards is now a vector of pointers to different nodes
    std::random_device rd;
    std::mt19937 g(rd()); //makes seeed for shuffle function
    std::shuffle(cards.begin(), cards.end(), g);//rearranges pointers

    int deck_size = cards.size() - 1; //need minus 1 b/c most things start @ zero but size() starts @ 1
    front = cards[deck_size]; //starts linked list by making front a pointer to whatever was last in vector
    curr = front;
    cards.pop_back(); //removes the added node from the vector of things to be added
    deck_size--;

    while(cards.empty() == false)
    {
        curr->next = cards[deck_size]; //adds next node and decreases card vector
        cards.pop_back();
        deck_size--;

        curr = curr->next;

    }
    curr->next = NULL; //makes last node point to null
}

ostream& operator<<(ostream& ostr, const deck& d)
// <<<<<<<< << < << <<< <<< << << ostr
{
    node<card> *curr;
    curr = d.front;

    while (curr != NULL)
    {
        ostr << curr->nodeValue;
        curr = curr->next;
    }

    return ostr;
}