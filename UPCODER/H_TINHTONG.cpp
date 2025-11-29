#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    
    cout << fixed << setprecision(5);
    while (cin >> n) {
        cout << n * 1.0 / (n + 1) << '\n';
    }
    
    return 0;
}