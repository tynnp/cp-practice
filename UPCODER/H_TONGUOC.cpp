#include <iostream>
using namespace std;

int calc(int a, int b) {
    int res = 0;
    
    for (int i = 1; i <= a; i++) 
        if (a % i == 0 && b % i != 0)
            res += i;
            
    return res;
}

int main() {
    int a, b;
    
    while (cin >> a >> b) 
        cout << calc(a, b) << '\n';
        
    return 0;
}