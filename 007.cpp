#include <iostream>

int main()
{
    using namespace std;
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        cout << '\n';
    }

    return 0;
}
