#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i=0; i<t;i++) {
    string number;
    cin >> number;

    int first_three = 0;
    int last_three = 0;

    for (int j=0; j<3; j++) {
      first_three += number[j] - '0';
    }

    for (int k=5; k>2; k--) {
      last_three += number[k] - '0';

    }

    if (first_three == last_three ) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }

  }

  return 0;
}