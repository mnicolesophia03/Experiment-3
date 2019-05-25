#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char arr[50];
    int s;
    
    cout << "Enter array size: ";
	cin >> s;
	cout << "\n";

    for (int i = 0; i < s; i++)
    {
        cout << "Enter a character: ";
        cin >> arr[i];
    }

    for (int i = s; i >= 0; i--)
    {
        cout << arr[i];
    }
    
    cout << "\n\nArray Size: " << s << " ";

	_getch();
    return 0;
}
