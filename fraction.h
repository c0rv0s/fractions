#ifndef FRACTION_H
#define FRACTION_H

class fraction
{
	public:
		fraction();
		fraction(int innumer, int indenom);
		fraction AddedTo(fraction f)const;
		fraction Subtract(fraction f)const;
		fraction MultipliedBy(fraction f)const;
		fraction DividedBy(fraction f)const;
		bool isEqualTo(fraction f);
		void print()const;

	private:
		int numer;
		int denom;
};

#endif