#include <iostream>
#include <cstdint>

int main()
{
	using namespace std;
	cout << "Powers of 2: ";

	for (uint64_t p = 1; p != 0; p *= 2) {
		cout << p << '\n';
	}
	
	return 0;
}
