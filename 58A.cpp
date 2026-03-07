#include <iostream>
using namespace std;

int main() {

  string s;
  cin >> s;

  string hello = "hello";
  int j = 0;

  for (int i = 0; i < s.size() && j < 5; i++) {
    if (s[i]==hello[j]) {
      j++;
    }
  }

  cout << (j == 5 ? "YES" : "NO") << endl;
  
}