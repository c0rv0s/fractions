#include <iostream>
#include "fraction.h"
using namespace std;

fraction::fraction()
{
	numer = 0;
	denom = 0;
}

fraction::fraction(int innumer, int indenom)
{
	int smallestNum;
	int gcf = 1;

	if (innumer <= indenom)
		smallestNum = innumer;
	else
		smallestNum = indenom;

	for (int i = 1; i <= smallestNum; i++)
	{
		if ((innumer % i == 0) && (indenom % i == 0))
			gcf = i;
	}

	innumer = innumer / gcf;
	indenom = indenom / gcf;

	if (innumer == 0)
		indenom = 1;

	numer = innumer;
	denom = indenom;
}

fraction fraction::MultipliedBy(fraction f) const
{
	return fraction(f.numer * numer, f.denom * denom);
}

fraction fraction::DividedBy(fraction f) const
{
	return fraction(numer * f.denom, denom * f.numer);
}

fraction fraction::AddedTo(fraction f) const
{
	return fraction(numer * f.denom + f.numer * denom, denom * f.denom);
}

fraction fraction::Subtract(fraction f) const
{
	return fraction(numer * f.denom - f.numer * denom, denom * f.denom);
}

bool fraction::isEqualTo(fraction f)
{
	return (numer / f.numer) == (denom / f.denom);
}


void fraction::print() const
{
	cout << numer << "/" << denom;
}

