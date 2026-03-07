#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int esik = a[k - 1]; // k. sıradaki puan (0-indexed)
    int sayac = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] >= esik && a[i] > 0)
            sayac++;
    }
    
    cout << sayac << endl;
    return 0;
}