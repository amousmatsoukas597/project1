#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0)
                continue; // Skip even numbers
            else 
                cout << i << " "; // Print odd numbers
        }
    } else {
        cout << "Please enter a positive integer." << endl;
    }
    
    return 0;
}
