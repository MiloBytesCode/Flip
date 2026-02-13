/* ========================================================================= */
// PROJECT FLIP
//
// desc desc desc desc
//
/* ========================================================================= */


#include <iostream>
#include "deck.h"
#include "card.h"
using namespace std;

int main()
{
    deck tasty_double_decker;

    cout << tasty_double_decker;

    tasty_double_decker.shuffle();

    cout << tasty_double_decker;
    
    return 0;
}