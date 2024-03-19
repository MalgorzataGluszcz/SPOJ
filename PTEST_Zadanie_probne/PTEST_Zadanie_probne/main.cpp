#include <iostream>

int main()
{
	short a, b;
	short &aRef = a, &bRef = b;
	std::cin >> aRef >> bRef;

	// Sprawdzenie przepelnienia
	// constexpr - powoduje to, ze wyrazenie jest uruchamiane w czasie kompilacji
	// std::is_same_v<short, int> - sprawdzenie przepelnienia arytmetycznego jest sprawdzane tylko wtedy jesli short = int.
	if constexpr (std::is_same_v<short, int>) {
		if (aRef > INT_MAX - bRef || bRef < INT_MIN - aRef) {
			std::cerr << "Blad: przepelnienie arytmetyczne." << std::endl;
			return 1;
		}
	}

	std::cout << aRef + bRef << '\n';

	return 0;
}