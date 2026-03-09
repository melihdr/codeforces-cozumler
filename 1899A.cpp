#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i=0; i<t; i++) {
    int number;
    cin >> number;

    if (number % 3 == 0) {
      cout << "Second" << endl;
    } else {
      cout << "First" << endl;
    }
  }

  return 0;

}