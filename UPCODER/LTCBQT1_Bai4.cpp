#include <iostream>
using namespace std;

int main() {
    double dtb;
    int sobuoi, duan;
    cin >> dtb >> sobuoi >> duan;

    double tong = dtb;

    if (sobuoi >= 28)
        tong += 0.5;

    if (duan == 1)
        tong += 0.5;

    if (tong > 10.0)
        tong = 10.0;

    if (tong >= 9.0)
        cout << "Xuat sac";
    else if (tong >= 8.0)
        cout << "Gioi";
    else if (tong >= 6.5)
        cout << "Kha";
    else if (tong >= 5.0)
        cout << "Trung binh";
    else
        cout << "Yeu";

    return 0;
}