#include <iostream>
using namespace std;

int main() {
    int gb;
    cin >> gb;

    int res = 120000;

    if (gb <= 50) 
        res += gb * 2000;
    else if (gb <= 100) 
        res += 50 * 2000 + (gb - 50) * 2500;
    else 
        res += 50 * 2000 + 50 * 2500 + (gb - 100) * 3000;

    cout << res;
    return 0;
}