#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int count_anton = 0;
  int count_danik = 0;

  for (int i = 0; i<n; i++) {
    if (s[i] == 'A') {
      count_anton++;
    } else {
      count_danik++;
    }
  }

  if (count_anton > count_danik) {
    cout << "Anton";
  } else if (count_danik>count_anton){
    cout << "Danik";
  } else {
    cout << "Friendship";
  }

  return 0;


}