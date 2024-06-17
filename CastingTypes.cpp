// CastingTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	
	bool operator ==(Fraction other) {


		int temp_numerator1 = numerator_ * other.denominator_;
		int temp_numerator2 = other.numerator_ * denominator_;
		if (temp_numerator1 == temp_numerator2) return 1;
		else return 0;
	}
	bool operator !=(Fraction other) { return !(*this == other); }
	bool operator >(Fraction other) {
		int temp_numerator1 = numerator_ * other.denominator_;
		int temp_numerator2 = other.numerator_ * denominator_;
		if (temp_numerator1 > temp_numerator2) return 1;
		else return 0;
	}
	bool operator <(Fraction other) { return other > *this; }
	bool operator>=(Fraction other) { return !(*this < other); }
	bool operator<=(Fraction other) { return !(*this > other); }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(8, 6);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
