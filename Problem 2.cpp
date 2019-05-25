#include <iostream>
using namespace std;

const int CITY = 2;
const int WEEK = 7;

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, i, c;
	int daya[7], dayb[7], dayc[7];

    cout << "Enter all temperature for a week of Province A,\n";
    cout << "Province B and then Province C.\n\n";
   
    for (n = 0; n < 7; n++)
        {
            cout << "Province A, Day " << n + 1 << ": ";
            cin >> daya[n];
        }

	for (i = 0; i < 7; i++)
		{
			cout << "Province B, Day " << i + 1 << ": ";
			cin >> dayb[i];
		}
	
	for (c = 0; c < 7; c++)
		{
			cout << "Province C, Day " << c + 1 << ": ";
			cin >> dayc[c];
		}

	cout << "\n\nDisplaying Values: \n";
{
	for (n = 0; n < 7; n++)
	{
		cout << "Province A, Day " << n + 1 << " = " << daya[n] << endl;
	}
	
	for (i = 0; i < 7; i++)
	{
		cout << "Province B, Day " << i + 1 << " = " << dayb[i] << endl;
	}
	
	for (c = 0; c < 7; c++)
	{
		cout << "Province C, Day " << c + 1 << " = " << dayc[i] << endl;
	}
}
    return 0;
}
