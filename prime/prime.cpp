#include <iostream>
using namespace std;

// Function prototype

bool IsPrime(int num);
int Prime(int n);


int main()
{
	int n,
		count = 0; 
	char repeat;

	do
	{
		cout << "\nEnter a value to find the Nth prime number:  ";
		cin >> n;
		if (n > 0)
		{
			cout << "\nThe " << n << "th prime number is: "
				<< Prime(n) << endl;

			cout << "\nWould you like to find another Nth"
				<< " prime number? (Y/N): ";
			cin >> repeat;
		}

		while (repeat != 'Y' && repeat != 'y' && repeat != 'N'
			&& repeat != 'n')
		{
			cout << "Invalid input, please enter Y/N: ";
			cin >> repeat;
		}
	} while (repeat == 'Y' || repeat == 'y');

}

bool IsPrime(int num)
{
	bool status = true;

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0) {
			status = false;
			break;
		}
	}
	return status;
}



int Prime(int n)
{
	int numChecked,			// numbers checked
		reqMet = 0;			// numbers that are prime
	
	for (numChecked = 2; reqMet < n; numChecked++)
	{
		if (IsPrime(numChecked))
			++reqMet; 
	}
	return --numChecked;
}
