#include <iostream>
#include "Length.h"
using namespace std;


int main()
{
	Length len1,
		len2,
		len3;

	cout << "\nEnter first length value (ft'inches\"): ";
	len1.Read();
	cout << "\nEnter second length value (ft'inches\"): ";
	len2.Read();
	cout << "\nEnter third length value (ft'inches\"): ";
	len3.Read();

	cout << "\nThe 3 lengths in ascending order: ";
	cout << "\n";
	if (len1.LessThan(len2))
	{
		if (len1.LessThan(len3))
		{
			len1.Write();
			cout << "\n";
		}
		else
		{
			len3.Write();
			cout << "\n";
		}
	}
	else
	{
		if (len2.LessThan(len3))
		{
			len2.Write();
			cout << "\n";
		}
		else
		{
			len3.Write();
			cout << "\n";
		}
	}

	if (len1.LessThan(len3) && len1.GreaterThan(len2) || 
		len1.LessThan(len2) && len1.GreaterThan(len3))
	{
		len1.Write();
		cout << "\n";
	}
	else if (len2.LessThan(len3) && len2.GreaterThan(len1) || 
		len2.LessThan(len1) && len2.GreaterThan(len3))
	{
		len2.Write();
		cout << "\n";
	}
	else if (len3.LessThan(len1) && len3.GreaterThan(len2) || 
		len3.LessThan(len2) && len3.GreaterThan(len1))
	{
		len3.Write();
		cout << "\n";
	}

	if (len1.GreaterThan(len2))
	{
		if (len1.GreaterThan(len3))
		{
			len1.Write();
			cout << "\n";
		}
		else
		{
			len3.Write();
			cout << "\n";
		}
	}
	else 
	{
		if (len2.GreaterThan(len3))
		{
			len2.Write();
			cout << "\n";
		}
		else
		{
			len3.Write();
			cout << "\n";
		}
	}

		
	return 0;
}
