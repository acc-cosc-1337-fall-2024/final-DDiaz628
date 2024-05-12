//
//
#include <iostream>
#include "roll.h"
#include "phase.h"

#ifndef COME_OUT_PHASE_H
#define COME_OUT_PHASE_H

class ComeOutPhase : public Phase
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