#include <iostream>
using namespace std;

int main()
{
	int choice;
	int dig1;
	int dig2;

	cout << "Enter num1:";
	cin >> dig1;
	cout << "Enter num2:";
	cin >> dig2;

	cout << "1(+) or 2(-) or 3(*) or 4(/):" << endl;
	cin >> choice;

	if (choice == 1)
	{
		cout << dig1 << " + " << dig2 << " = " << dig1 + dig2;
	}
	else if (choice == 2)
	{
		cout << dig1 << " - " << dig2 << " = " << dig1 - dig2;
	}
	else if (choice == 3)
	{
		cout << dig1 << " * " << dig2 << " = " << dig1 * dig2;
	}
	else if (choice == 4)
	{
		cout << dig1 << " / " << dig2 << " = " << dig1 / dig2;
	}
	else
	{
		cout << "Wrong number:(";
	}
}