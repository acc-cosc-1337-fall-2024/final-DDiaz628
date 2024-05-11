#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "phase.h"
#include <iostream>

using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Die class Roll function")
{
	Die roll;
	bool test;

	srand(time(NULL));
	
	if(roll.roll() >= 1)
	{
		test = true;
	}
	else if (roll.roll() <= 6)
	{
		test = true;
	}
	else
		test = false;
	
	//roll.roll();
	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	//roll.roll();
	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);

	cout<<roll.roll()<<"\n";
	REQUIRE(test == true);
}
