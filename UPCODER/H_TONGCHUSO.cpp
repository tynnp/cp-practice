#include <iostream>
using namespace std;

int sum(int x) {
    int res = 0;
    
    while (x > 0) {
        res += x % 10;
        x /= 10;
    }
    
    return res;
}

int main() {
    int n, m;
    
    while (cin >> n >> m) {
        int x = n, cnt = 0;
    
        while (x <= m) {
            cnt++;
            x = x + sum(x);
        }
    
        cout << cnt << '\n';
    }
    
    return 0;
}