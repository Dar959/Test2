#include <iostream>
using namespace std;
int main () {
    int N;
    cout << "N:";
    cin >> N;
    int sum = 0;
    int product = 1;
    for (int i=1; i <=N; i++) {
        sum += i;
        product *= i;
    }
    cout << "Sum:" << sum << endl;
    cout << "Product:" << product << endl;
    return 0;
}
