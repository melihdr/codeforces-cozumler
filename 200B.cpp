#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  double total = 0;

  for (int i=0; i<n; i++) {
    int ipercent;
    cin >> ipercent;
    total += ipercent;
  }

  cout << total / n << endl;
  return 0;
}