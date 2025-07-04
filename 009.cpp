#include <iostream>

int main()
{
    using namespace std;
    cout << "Collatz sequence, enter natural numbers.\n";

    for (unsigned long long n; cin >> n;) {
        while (n > 1) {
            cout << n << " -> ";
            n = n & 1? 3 * n + 1: n / 2;
        }

        cout << n << "\nSequence finished.\n";
    }

    return 0;
}
