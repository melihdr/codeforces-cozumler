#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++) {
        string ifade;
        cin >> ifade;

        if (ifade == "++X" || ifade == "X++") {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}