#include <iostream>
using namespace std;

class Length
{
private:
	int ft;
	double in;

public:
	Length() : ft(0), in(0)
	{}
	Length(int f, float i) : ft(f), in(i)
	{
		if ((ft < 0) || (in < 0) || (in >= 12))
			in = ft = 0;
	}

	int getFeet()
	{
		return ft;
	}
	double getInches()
	{
		return in;
	}
	double getLength()
	{
		return (ft * 12) + in;
	}
	Length Add(Length l);
	bool LessThan(Length l);
	bool GreaterThan(Length l);
	bool EqualTo(Length l);

	void setFeet(int f)
	{
		ft = f;
	}
	void setInches(double i)
	{
		in = i;
	}
	void setValue(int f, double i)
	{
		ft = f; in = i;
	}
	void AddTo(Length l);
	void Read();
	void Write();
};


Length Length::Add(Length l)
{
	Length temp;
	temp.ft = ft + l.ft;
	temp.in = in + l.in;
	if (temp.in >= 12) {
		temp.ft++;
		temp.in = temp.in - 12;
	}

	return temp;
}

bool Length::LessThan(Length l)
{
	bool result;

	if ((ft < l.ft) || ((ft == l.ft) && (in < l.in)))
		result = true;
	else
		result = false;

	return result;
}

bool Length::GreaterThan(Length l)
{
	return (ft > l.ft) || ((ft == l.ft) && (in > l.in));
}

bool Length::EqualTo(Length l)
{
	return (ft == l.ft) && (in == l.in);
}

void Length::AddTo(Length l)
{
	ft = ft + l.ft;
	in = in + l.in;

	if (in >= 12) {
		ft++;
		in -= 12;
	}
}

void Length::Read()
{
	char skip;
	cin >> ft >> skip >> in >> skip;
	if ((ft < 0) || (in < 0) || (in >= 12))
		in = ft = 0;
}

void Length::Write()
{
	cout << ft << "'" << in << '"';
}



void swap(Length &loc1, Length &loc2)
{
	Length temp = loc1;
	loc1 = loc2;
	loc2 = temp;
}


void SortLengths(Length lenList[], int size)
{
	for (int i = (size - 1); i > 0; i--)
		for (int j = 0; j < i; j++)
			if (lenList[j].GreaterThan(lenList[j + 1]))
			{
				swap(lenList[j], lenList[j + 1]);
			}
}

int main()
{
	Length len1[100];
	int size;
	cout << "How many values to be processed (1-100)?: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "\nEnter length (feet'inches\"): ";
		len1[i].Read();
	}
	cout << "\nLengths in ascending order: ";
	SortLengths(len1, size);
	for (int i = 0; i < size; i++)
	{
		len1[i].Write();
		cout << " ";
	}

	return 0;
}


