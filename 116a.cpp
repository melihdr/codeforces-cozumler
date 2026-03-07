#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0;
    int max_passengers = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current -= a;  
        current += b;  

        max_passengers = max(max_passengers, current);
    }

    cout << max_passengers;
    return 0;
}