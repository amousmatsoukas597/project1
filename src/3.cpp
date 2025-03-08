#include <iostream>
using namespace std;
int main() {
  int num = rand() % 10 + 1; // generate a random number between 1 and 10
  cout << "The random number is: " << num << endl;
  return 0;
}
