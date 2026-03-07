#include <iostream>
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;

  string nt(s.rbegin(), s.rend());

  if (nt == t) {
    cout << "YES";
    return 0;
  }

  cout << "NO";

  return 0;




}