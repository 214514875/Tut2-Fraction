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
	
	Fraction& operator+(Fraction& frac)
	{
		Fraction addF;
		addF.setNum(num + frac.getNum());
		addF.setDen(den + frac.getDen());
		return addF;
	}

	Fraction& operator-(Fraction& frac)
	{
		Fraction subF;
		subF.setNum(num - frac.getNum());
		subF.setDen(den - frac.getDen());
		return subF;
	}
		
	Fraction& operator*(Fraction& frac)
	{
		Fraction mulF;
		mulF.setNum(num*frac.getNum());
		mulF.setDen(den*frac.getDen());
		return mulF;
	}

	Fraction& operator/(Fraction& frac)
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
	int num, den,flag=1,n,d;

	cout << "Enter a numerator " << endl;
	cin >> num;
	cout << "Enter a denominator " << endl;
	cin >> den;

	cout << "Enter a numerator " << endl;
	cin >> n;
	cout << "Enter a denominator " << endl;
	cin >> d;

	Fraction frac1 = Fraction(num,den);
	Fraction frac2 = Fraction(n,d);
	Fraction sub, add, mult, div;

	add = frac1+frac2;
	sub = frac1-frac2;
	mult = frac1*frac2;
	div = frac1/frac2;

	cout << "The sum is " << endl;
	add.print();
	cout << "The differance is " << endl;
	sub.print();
	cout << "The multiplication is " << endl;
	mult.print();
	cout << "The quotient is " << endl;
	div.print();

	return 0;
}
