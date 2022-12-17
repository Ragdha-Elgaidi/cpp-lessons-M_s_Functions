/*
We can also send strings! But copying a big string just takes a lot of time? More wise use &
■ string &str
*/
#include<iostream>
using namespace std;

bool is_lower(string str)
{
	for (int i = 0; i < (int)str.size(); ++i)
	{
		bool lower = 'a' <= str[i] && str[i] <= 'z';

		if (!lower)
			return false;
	}
	return true;
}

int main()
{
	cout << is_lower("abc") << "\n";
	cout << is_lower("aBC") << "\n";

	return 0;
}
