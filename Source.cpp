#include <iostream>

using namespace std;

class Fraction{
private:
	int num;
	int den;

public:
	Fraction(int n, int d){
		num= n;
		den = d;
	};

	Fraction(){
	};

	int getNum(){
		return num;
	}

	int getDen(){
		return den;
	}

	void setNum(int n)
	{
		num = n;
	}

	void setDen(int d)
	{
		den = d;
	}

	Fraction add(Fraction frac)
	{
		Fraction addF;
		addF.setNum(num + frac.getNum());
		addF.setDen(den + frac.getDen());
		return addF;
	}

	Fraction sub(Fraction frac)
	{
		Fraction subF;
		subF.setNum(num - frac.getNum());
		subF.setDen(den - frac.getDen());
		return subF;
	}

	Fraction divide(Fraction frac)
	{
		Fraction divF;
		divF.setNum(int(num / frac.getNum()));
		divF.setDen(int(den / frac.getDen()));
		return divF;
	}

	void print()
	{
		cout << num << "/" << den << endl;
	}
};

int main()
{

	return 0;
}
