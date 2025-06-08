#include <iostream>

bool isYes(char input)
{
    return input == 'y' || input == 'Y';
}

int main()
{
    using namespace std;

    for (;;) {
        cout << "Working...\n";
        cout << "Do you want to finish? Y/N ";
        if (char answer; !(cin >> answer) || isYes(answer)) {
            cout << "Finishing\n";
            break;
        }
    }

    return 0;
}
