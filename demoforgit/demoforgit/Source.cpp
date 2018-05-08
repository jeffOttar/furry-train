//
// jeff ottar

#include <iostream>
#include "PairOfDice.h"

int main()
{
	PairOfDice dice;

	for (int i = 0; i < 100; i++) {
		std::cout << dice.roll() << " ";
		if (dice.isGoToJail())
		{
			std::cout << "\n\n***GO TO JAIL***\n\n";
		}
	}

	getchar();
}