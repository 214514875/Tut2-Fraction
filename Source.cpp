#include <iostream>

using namespace std;

class Fraction{
private:
	int num1;
	int num2;

public:
	Fraction(int n1, int n2){
		num1 = n1;
		num2 = n2;
	};

	int getNum1(){
		return num1;
	}

	int getNum2(){
		return num2;
	}

	void setNum1(int n1)
	{
		num1 = n1;
	}

	void setNum2(int n2)
	{
		num2 = n2;
	}

	float add(Fraction frac)
	{
		return float(num1/num2) + float(frac.getNum2/frac.getNum1);
	}

	float subract(Fraction frac)
	{
		return float(num1/num2) - float(frac.getNum1/frac.getNum2);
	}

	float divide(Fraction frac)
	{
		return float(num1/num2)/float(frac.getNum1/frac.getNum2);
	}

	void print()
	{
		cout << num1 << "/" << num2 << endl;
	}
};

int main()
{

	return 0;
}
