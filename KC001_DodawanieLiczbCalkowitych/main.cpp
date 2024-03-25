#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int sum{ 0 }, number{ 0 };

	for (int i = 0; i < 3; i++)
	{
		cin >> number;
		sum += number;
	}

	cout << sum;

	return 0;
}