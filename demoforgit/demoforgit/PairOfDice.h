//
//jeff ottar

#pragma once

#include <random>

class PairOfDice
{
public:
	PairOfDice();

	int roll();
	bool isGoToJail();

private:
	int numberOfConsecutiveDoubles;

	std::random_device rd;//actual random seed
	std::default_random_engine dre;//random engine for the dice rolls randomness
};

