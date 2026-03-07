#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " that ";
        cout << (i % 2 == 1 ? "I hate" : "I love");
    }

    cout << " it" << endl;
}