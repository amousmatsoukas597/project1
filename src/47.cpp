#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter an integer: ";
    cin >> i;

    if (i % 2 == 0) {
        cout << i * i << " is a perfect square.";
    } else {
        cout << i * i << " is not a perfect square."
             << (i > 0 ? " and positive" : "");
    }

    return 0;
}
