/*
We can define several functions with SAME name BUT different parameters(types or their count)
○ Return is not considered
*/
#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

int add(int a, int b, int c)
{
	return a + b + c;
}

int main() 
{
	cout << add(2, 3) << "\n";
	cout << add(2.0, 3.5) << "\n";
	return 0;
}
