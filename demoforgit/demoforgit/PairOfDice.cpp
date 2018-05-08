#include "PairOfDice.h"

PairOfDice::PairOfDice() :
	dre(PairOfDice::rd())
{}

int PairOfDice::roll()
{
	std::uniform_int_distribution<int> di(1, 6);//distribution for integer

	int roll1 = di(dre);//roll with the distribution with dre as the source of randomness
	int roll2 = di(dre);

	//if roll 1 != roll2 or numofdoubles == 3(because if 3 conseq double then they have already been to jail)
	//then reset the counter if equal then set to number++
	numberOfConsecutiveDoubles=(roll1!=roll2 || numberOfConsecutiveDoubles==3)?
		0 : 
		numberOfConsecutiveDoubles + 1;

	return roll1+roll2;
}

bool PairOfDice::isGoToJail()
{
	return (numberOfConsecutiveDoubles==3);
}
