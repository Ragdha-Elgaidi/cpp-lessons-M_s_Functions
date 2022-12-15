#include<iostream>
using namespace std;

int lucky_number()
{
	//Sometimes, we don’t need to send parameters
	return 13;
}

int main2()
{
	// Sometimes we don’t return something
	return 0;
}

void print_sum(int a, int b)
{
	// We use void,Common mistake: expecting return
	cout << a + b << "\n";
}

int main() 
{
	cout << lucky_number() << "\n";
	print_sum(2, -5);

	return 0;
}
