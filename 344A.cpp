#include <iostream>
using namespace std;

int main() {
  int n, magnet, previous = 0, count=0;
  cin>>n;

  while(n--) {
    cin>>magnet;

    if (magnet != previous) {
      count++;
      previous = magnet;
    }

  }

  cout << count << endl;
  return 0;
}