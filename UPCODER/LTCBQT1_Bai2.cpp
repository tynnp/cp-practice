#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1000 || n > 9999) {
        cout << "So khong hop le";
        return 0;
    }

    if ((n / 100) % 10 % 2 == 0)
        cout << "So Chan";
    else
        cout << "So Le";

    return 0;
}
