#include <iostream>
#include <cmath>

int main()
{
	const int ARRAY_SIZE = 10001;
	bool numbers[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = true;
	}

	numbers[1] = false;

	for (int i = 2; i < sqrt(ARRAY_SIZE); i++)
	{
		if (numbers[i] == true)
		{
			for (int j = i + i; j < ARRAY_SIZE; j = j + i)
			{
				numbers[j] = false;
			}
		}
	}

	int t{ 0 };
	int nums{ 0 };

	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> nums;
		if (numbers[nums] == true)
			std::cout << "TAK\n";
		else
			std::cout << "NIE\n";
	}

	return 0;
}