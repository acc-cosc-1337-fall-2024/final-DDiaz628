//
//
#include <iostream>
#include "roll.h"

#ifndef POINT_PHASE_H
#define POINT_PHASE_H

class PointPhase : public Phase
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
    PointPhase(int p);
    RollOutcome get_outcome(Roll* roll);

private:
    int point;

};


#endif