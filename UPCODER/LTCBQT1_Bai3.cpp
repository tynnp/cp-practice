#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c;
    double vnd;
    cin >> c >> vnd;
    cout << fixed << setprecision(2);
    
    switch (c) {
        case 1:
            cout << vnd / 25000.0;
            break;

        case 2:
            cout << vnd / 27000.0;
            break;

        case 3:
            cout << vnd / 160.0;
            break;

        default:
            cout << "Lua chon khong hop le";
            break;
    }

    return 0;
}