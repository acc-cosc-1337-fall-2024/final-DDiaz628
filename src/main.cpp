#include "die.h"
#include "shooter.h"
#include "roll.h"
#include "phase.h"
#include "come_out_phase.h"
#include "point_phase.h"

int main() 
{
	srand(time(0));

	Die die1;
	Die die2;
	Shooter shooter(Die& die1, Die& die2);
	Roll* roll;
	roll = shooter.throw_die()

	
	return 0;
}