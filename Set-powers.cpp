/*
● Implement this function
● void set_powers(int arr[], int len = 5, int m = 2)
● This function will fill the array of len as following:
○ The i-th position: m^i, e.g. m * m * m … i times
○ E.g. for len = 6, m = 2 ⇒ 1 2 4 8 16 32
○ E.g. for len = 4, m = 3 ⇒ 1 3 9 27
● After a return from call: print the array
○ Try it with different default value scenarios
*/
#include<iostream>
using namespace std;

void set_powers(int arr[], int len = 5, int m = 2)
{
	arr[0] = 1;

	for (int i = 1; i < len; ++i)
	{
		arr[i] = arr[i - 1] * m;
	}
}

int main()
{
	int arr[100];
	int len, m;
	cin >> len >> m;

	set_powers(arr, len, m);

	for (int i = 0; i < len; ++i)
		cout << arr[i] << " ";
	return 0;
}
