#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * 3 / 2 << endl;
    } else {
        cout << n << endl;
    }
}
