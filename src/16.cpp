#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int sum = 0;

    if (num == 1) {
        cout << "The number is odd" << endl;
    } else {
        for (int i = 1; i <= num; ++i) {
            sum += i;
        }
        cout << "Sum of first " << num << " natural numbers: " << sum << endl;
    }

    return 0;
}
