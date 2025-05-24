#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool isStudent = true;
    double salary = 5000.0;
    
    cout << "My name is " << age << " and I am a student." << endl;
    if (isStudent) {
        cout << "I'm an adult." << endl;
    } else {
        cout << "I'm still a student." << endl;
    }
    cout << salary << endl;
    
    return 0;
}
