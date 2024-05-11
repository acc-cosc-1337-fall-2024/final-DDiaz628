#include "die.h"
//
int Die ::roll()
{
   //srand(time(0));
    
    int roll = rand() % sides + 1;

    return roll;
}