#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    bool f = false;
    while ( n > 0 && !f) {
        int di = n % 10;
        if (di!=f && di % 3 == 0) {
            cout << di;
            f = true;
        }
        n = n / 10;
    }
    if (!f) {
        cout << -1;
    }
    return 0;
}