#include <iostream>
using namespace std;

int main() {
  int y;
  cin >> y;



  for (int i=0; i<9000; i++) {

    bool a = true;
    y = y+1;
    string ny= to_string(y);

    int ny_length = ny.length();

    for (int i = 0 ; i <ny_length; i++) {
      int adet = count(ny.begin(),  ny.end(), ny[i]);

      if (adet > 1) {
        a = false;
      }
    }
    
    if (a) {
      cout << y;
      return 0;
    }

  }

}

/*
#include <iostream>
#include <set>
using namespace std;

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        string s = to_string(y);
        set<char> digits(s.begin(), s.end());

        if (digits.size() == s.size()) {
            cout << y;
            return 0;
        }
    }
}

*/