#include "roll.h"
#include <iostream>
#include <vector>

using std::cout; using std::vector;
//
#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter : public Roll
{
public:
    Roll* throw_dice(Die& die1, Die& die2);
    void display_rolled_values();
    ~Shooter();
private:
    vector<Roll*> rolls( Roll* DN);


};


#endif