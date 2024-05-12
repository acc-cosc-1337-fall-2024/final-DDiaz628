#include "die.h"

//
#ifndef ROLL_H
#define ROLL_H

class Roll : public Die
{
public:
    Roll(Die& die1, Die& die2);
    void roll_dice();
    int roll_value()const;

private:
    Die& die1;
    Die& die2;
    int rolled_value;

};


#endif