#include <iostream>
using namespace std;

void ReadDate(int &m, int &d, int &yr)
{
	char back;
	back = '\\';

	cin >> m >> back >> d >> back >> yr;
}

bool IsLeapYear (int yr)
{
	if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
	{
		return true;
	}
		
}

int OrdinalDay(int &m, int &d, int &yr)
{
	int TotalDays,
		total31 = 31,	// months that have 31 days
		total30 = 30,	// months that have 30 days
		Feb; 
	if (IsLeapYear(yr) == true)
		Feb = 29;		// if leap year then there are 29 days
	else
	{
		Feb = 28;
	}

	switch (m)
	{
	case 1: d = d;
		break;
	case 2: d = d + total31;
		break;
	case 3: d = d + total31 + Feb;
		break;
	case 4: d = d + (total31 * 2) + Feb;
		break;
	case 5: d = d + (total31 * 2) + total30 + Feb;
		break;
	case 6: d = d + (total31 * 3) + total30 + Feb;
		break;
	case 7: d = d + (total31 * 3) + (total30 * 2) + Feb;
		break;
	case 8: d = d + (total31 * 4) + (total30 * 2) + Feb;
		break;
	case 9: d = d + (total31 * 5) + (total30 * 2) + Feb;
		break;
	case 10: d = d + (total31 * 5) + (total30 * 3) + Feb;
		break;
	case 11: d = d + (total31 * 6) + (total30 * 3) + Feb;
		break;
	case 12: d = d + (total31 * 6) + (total30 * 4) + Feb;
		break;
	}
	return 0;
}

void main()
{
	int processDate,
		totalYears = 0,
		m,
		d,
		yr;

	cout << "\nHow many dates will you"
		<< " be processing?: ";
	cin >> processDate;
	do
	{
		if (processDate == 0)
		{
			break;
		}
		cout << "\nEnter the date (mm/dd/yy) that"
			<< " will be processed: ";
		ReadDate(m, d, yr);
		totalYears++;
		
		OrdinalDay(m, d, yr);
		cout << yr << '/' << d << endl;

	} while (processDate != totalYears);

	cout << "\nAll dates have been processed.\n"
		<< "\nYou have processed " << processDate << " dates.\n";
}








