#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0)
            cout << "Odd" << endl;
        else
            cout << "Even" << endl;
    }
    return 0;
}
