#include <iostream>
using namespace std;

bool isLucky(int x) {
  while (x > 0) {
    int digit = x % 10;

    if (digit != 4 && digit != 7) {
      return false;
    }
    x /= 10;
  }
  return true;
}

int main() {

  int n;
  cin >> n;

  for (int i=1; i<=1000; i++) {
    if (isLucky(i) && n % i == 0) {
      cout << "YES" << endl;;
      return 0;
    }

  }


  cout << "NO" << endl;
  return 0;


}