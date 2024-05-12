//
#include <iostream>
#include "roll.h"

#ifndef PHASE_H
#define PHASE_H

class Phase : public Roll
{
enum RollOutcome
{
natural,
craps,
point,
seven_out,
no_point
};

public:
    RollOutcome get_outcome(Roll* roll);

};


#endif