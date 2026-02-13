/* ========================================================================= */
// The CARD class header files
//
// desc desc desc desc
// 
/* ========================================================================= */

class card 
{
    public:
        card(int cardStuff);

        void getValue() const;
        void setValue(int newVal);

        void getSuit() const;
        void setSuit(int suit);

    private:
        int suit;
        int val;

};