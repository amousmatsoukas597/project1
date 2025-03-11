#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of strings to store the names
    vector<string> names;

    // Get the number of names to be entered from the user
    int numNames;
    cout << "Enter the number of names: ";
    cin >> numNames;

    // Loop to get the names from the user
    for (int i = 0; i < numNames; i++) {
        string name;
        cout << "Enter name #" << (i + 1) << ": ";
        cin >> name;
        names.push_back(name);
    }

    // Print the sorted list of names
    cout << "Sorted list of names: ";
    for (int i = 0; i < numNames; i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << names[i];
    }
    return 0;
}
