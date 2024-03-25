#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;

int factorial(int n);

int main()
{
	short t{0}, n{0};
	std::string factorialStr{"??"};

	cin >> t;
	while (t--)
	{
		cin >> n;

		int result = factorial(n);
		factorialStr = std::to_string(result);

		if (result < 10)
			cout << "0 " << factorialStr[0] << '\n';
		else
			cout << factorialStr[0] << " " << factorialStr[1] << '\n';
	}

	return 0;
}

int factorial(int n)
{
	if (n == 0)
		return 1;

	int result = factorial(n - 1) * n;

	return result;
}