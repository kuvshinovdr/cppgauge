#include <iostream>

double fahrToCels(double degCels)
{
	return (degCels - 32.) * (5./9.);
}

double celsToFahr(double degFahr)
{
	return degFahr * (9./5.) + 32.;
}

int main()
{
	using namespace std;
	cout << "Enter degrees: ";

	double deg;
	if (cin >> deg) {
		cout << deg << "F == " << fahrToCels(deg) << "C\n";
		cout << deg << "C == " << celsToFahr(deg) << "F\n";
		return 0;
	} else {
		cout << "Failed to parse degrees.\n";
		return 1;
	}
}
