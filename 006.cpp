#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            cout << setw(4) << i * j;
        }

        cout << '\n';
    }

    return 0;
}
