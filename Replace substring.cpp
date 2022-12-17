/*
● Implement this function
● string replace_str(string input, string pattern, string to)
○ Constraints: Input consists only of lower cases, len(pattern) > 0, len(to) >= 0
● The function replaces every pattern with to and return it
○ Input: “aabcabaaad”, “aa”, “x” - Return: “xbcabxad”
○ Input: “aabcabaaad”, “aa”, “aaaa” - Return: “aaaabcabaaaaad”
○ Input: “aabcabaaad”, “aa”, “” - Return: “bcabad”
● Let your code makes use of another function:
○ bool starts_with(string input, string pattern, int pos);
○ Return true if string input has the pattern starting from pos
○ Input: “aabcabaaad”, “aa”, 0 ⇒ True
○ Input: “aabcabaaad”, “aa”, 1 ⇒ False
*/
#include<iostream>
using namespace std;

bool starts_with(string input, string pattern, int pos)
{
	if (pos + pattern.size() > input.size())
		return false;

	for (int i = 0; i < (int)pattern.size(); ++i)
	{
		if (pattern[i] != input[i + pos])
			return false;
	}
	return true;
}

string replace_str(string input, string pattern, string to)
{
	string res = "";
	for (int pos = 0; pos < (int)input.size(); ++pos)
	{
		if (starts_with(input, pattern, pos)) 
		{
			res += to;
			pos += (int)pattern.size() - 1;	// Move to next right position
		}
		else
			res += input[pos];
	}

	return res;
}

int main() {
	cout << starts_with("aabcabaaad", "aa", 0) << "\n";
	cout << starts_with("aabcabaaad", "aa", 1) << "\n";
	cout << starts_with("aabcabaaad", "aabcabaaad", 0) << "\n";
	cout << starts_with("aabcabaaad", "baaad", 5) << "\n";
	cout << starts_with("aabcabaaad", "baaad", 4) << "\n";

	cout << replace_str("aabcabaaad", "aa", "x") << "\n";
	cout << replace_str("aabcabaaad", "aa", "aaaa") << "\n";
	cout << replace_str("aabcabaaad", "aa", "") << "\n";

	return 0;
}
