#include <iostream>
using namespace std;
int main () {
    int number;
    do
    {
        cout << "vedi ot 1 do 100";
        cin >> number;
        
    } while (number < 1 || number > 100);
    cout << "Ok\n";
    return 0;
}
    