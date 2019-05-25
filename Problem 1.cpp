#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>

using namespace std;

int main ()
{
	int e, n = 10;
	float arr[10], sum=0.00, ave;
	
	for (e = 0; e < n; ++e)
	{
		cout << "Enter Number " << e + 1 << ": ";
		cin >> arr[e];
		sum += arr[e];
	}
	
	for (e = 1; e < n; ++e)
	{
		if (arr[0] > arr[e])
		arr[0] = arr[e];
	}
	
	cout << "\nThe smallest element is: " << arr[0];
	
	for (e = 1; e < n; ++e)
	{
		if (arr[0] < arr[e])
		arr[0] = arr[e];
	}
	
	cout << "\nThe largest element is: " << arr[0];
	
	cout << "\nThe sum of the elements is: " << sum;
	
	ave = sum/n;
	cout << "\nThe average of the elements is: " << ave;
	
	_getch();
	return 0;
}
