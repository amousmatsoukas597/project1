#include <iostream>
#include <string>
using namespace std;
int main() {
    string userInput = "";
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are old enough to drive." << endl;
    } else {
        cout << "You are not yet old enough to drive." << endl;
    }
    return 0;
}
