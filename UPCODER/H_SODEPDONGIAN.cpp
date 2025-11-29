#include <iostream>
using namespace std;

bool soDep(int n) {
    
    while (n >= 10) {
        int sum = 0;
        
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        
        n = sum;
    }
    
    return n % 3 == 0;
}


int main() {
    int n;
    while (cin >> n)  
        cout << (soDep(n) ? "YES" : "NO") << '\n';
    return 0;
}