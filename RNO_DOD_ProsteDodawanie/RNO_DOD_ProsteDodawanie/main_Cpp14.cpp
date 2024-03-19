#include <iostream>
#include <numeric>
#include <vector>

using std::cin;
using std::cout;

int main()
{
	int t{ 0 };

	cin >> t;
	while (t--)
	{
		int n{ 0 };
		cin >> n;
		std::vector<int> numbers(n);
		for (auto &num : numbers)
			cin >> num;

		int sum = 0;
		sum = std::accumulate(numbers.begin(), numbers.end(), std::move(sum));
		cout << sum << '\n';
	}

	return 0;
}