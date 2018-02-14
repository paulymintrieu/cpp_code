//Function Definitions
#include "Length.h"



Length::Length()
{
	feet = 0;
	inches = 0.0;
}

Length::Length(int f, double i)
{
	feet = f;
	inches = i;
}


int Length::getFeet()
{
	return feet;
}

double Length::getInches()
{
	return inches;
}

double Length::getLength()
{
	return ((feet * 12.0) + inches);
}

Length Length::Add(Length l)
{
	int tmpFeet = feet + l.feet;
	double tmpInches = inches + l.inches;

	if (tmpInches >= 12.0) {
		tmpFeet++;
		tmpInches = tmpInches - 12.0;
	}

	return Length(tmpFeet, tmpInches);
}


bool Length::LessThan(Length l)
{
	return (getLength() < l.getLength());
}

bool Length::GreaterThan(Length l)
{
	return (getLength() > l.getLength());
}

bool Length::EqualTo(Length l)
{
	return (getLength() == l.getLength());
}

void Length::setFeet(int f)
{
	feet = f;
}

void Length::setInches(double i)
{
	inches = i;
}

void Length::setValue(int f, double i)
{
	feet = f;
	inches = i;
}

void Length::AddTo(Length l)
{
	feet = feet + l.feet;
	inches = inches + l.inches;
	if (inches >= 12.0)
	{
		feet = feet++;
		inches = inches - 12.0;
	}
}

void Length::Read()
{
	int feet;
	double inches;
	char singleQuote,
		doubQuote;
	singleQuote = '\'';
	doubQuote = '\"';
	cin >> feet >> singleQuote >> inches >> doubQuote;
	setFeet(feet);
	setInches(inches);
}

void Length::Write()
{
	cout << feet << "'" << inches << '"';
}

Length::~Length()
{

}
