/*
● Implement the following 2 functions:
● bool is_prime(int num);
○ Return true if number is prime
● Int nth_prime(int n);
○ Return the n-th prime number. It should use is_prime function
○ E.g nth_prime(6) = 13
■ Recall: 2, 3, 5, 7, 11, 13, 17, 19
*/
#include<iostream>
using namespace std;

bool is_prime(int num)
{
	if (num <= 1)
		return false;

	for (int i = 2; i < num; ++i) 
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int nth_prime(int n)
{
	for (int i = 2; ; ++i)
	{
		if (is_prime(i))
		{
			--n;
			if (n == 0)
				return i;
		}
	}
	return -1;
}

int main() 
{
	for (int i = 1; i < 20; ++i) 
	{
		cout << nth_prime(i) << " ";
	}

	return 0;
}
