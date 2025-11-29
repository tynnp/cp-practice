#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        cout << "Là tam giác";
    } else {
        cout << "Không phải tam giác";
    }

    return 0;
}