#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long yatay = (n + a - 1) / a;
    long long dikey = (m + a - 1) / a;

    cout << yatay * dikey << endl;

    return 0;
}