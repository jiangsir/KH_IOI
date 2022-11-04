#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10, a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        b = a + b;
        a = b - a;
        cout << b << endl;
    }
    return 0;
}