#include "roll.h"
#include "die.h"
//

Roll :: Roll(Die& die1, Die& die2)
:die1(die1), die2(die2)
{
    //roll_dice();
    std::cout<<"Hello"<<"\n";
}

void Roll::roll_dice()
{
    int die_1 = die1.roll();
    int die_2 = die2.roll();
    rolled_value = die_1 + die_2;
}

int Roll:: roll_value() const
{
    return rolled_value;
}