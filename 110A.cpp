#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;

  string ns = to_string(n);
  int count =0;

  for (char c : ns) {
    if (c == '4' || c== '7'){
      count++;
    }
  }

  if (count==0) {
    cout << "NO";
    return 0;
  }

  string cs = to_string(count);
  for (char c : cs) {
    if (c != '4' && c != '7') {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;

}