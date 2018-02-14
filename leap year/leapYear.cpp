#include <iostream>
using namespace std;

int main()
{
	int year;
	char repeat;
	int yearcount = 0;
	int total_leapyear = 0;

	do
	{
		cout << "\nEnter a year to be tested: ";
		cin >> year;

		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0) {
					cout << year << " is a leap year." << "\n";
					total_leapyear++;
				}

				else
					cout << year << " is not a leap year." << "\n";
			}

			else {
				cout << year << " is a leap year." << "\n";
				total_leapyear++;
			}
		}
		else
			cout << year << " is not a leap year." << "\n";
		yearcount++;

		cout << "\nWould you like to test another year? (Y/N) ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

	cout << "\nNumber of years tested: " << yearcount << endl;
	cout << "\nNumber of leap years: " << total_leapyear << endl;
	cout << "\n" << total_leapyear << " out of " << yearcount << " are leap years." << endl;

	return 0;
}
