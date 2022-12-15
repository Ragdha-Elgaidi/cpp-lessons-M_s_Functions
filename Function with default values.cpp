/*
● Pow (2, 4) = 2 * 2 * 2 * 2
● P has default value 3
○ Means if u did not send it, 3 will be used
● Mistake
○ Can’t use variable without default value after a
default value
○ Int solve(int a, int b = 2, int c); wrong
○ Int solve(int a, int b, int c = 3); correct
● We can have several defaults
○ Int solve(int a, int b = 2, int c = 3);
*/

#include<iostream>
using namespace std;

int our_pow(int n, int p = 3)
{
	int result = 1;

	while (p--)
		result *= n;

	return result;
}

int main() {
	cout << our_pow(2) << "\n";
	cout << our_pow(2, 3) << "\n";
	cout << our_pow(2, 4) << "\n";

	return 0;
}

#include<iostream>
using namespace std;

int our_pow(int n, int p = 3)
{
	int result = 1;

	while (p--)
		result *= n;

	return result;
}

int main()
{
	cout << our_pow(2) << "\n";
	cout << our_pow(2, 3) << "\n";
	cout << our_pow(2, 4) << "\n";

	return 0;
}
