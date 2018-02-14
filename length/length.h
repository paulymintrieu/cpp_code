/
//Header

#include <iostream>
using namespace std;

#ifndef LENGTH_H
#define LENGTH_H


class Length
{
private:
	int feet;
	float inches;
public:
	Length();
	Length(int f, double i=0);
	int getFeet();
	double getInches();
	double getLength();
	Length Add(Length l);
	bool LessThan(Length l);
	bool GreaterThan(Length l);
	bool EqualTo(Length l);
	void setFeet(int f);
	void setInches(double i);
	void setValue(int f, double i);
	void AddTo(Length l);
	void Read();
	void Write();

	~Length();



};

#endif // !LENGTH_H
