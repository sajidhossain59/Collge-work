#include <bits/stdc++.h>
using namespace std;

int fib(int n, int a, int b) {
    if (n==0) {
        return 0;
    }
    cout << a << " ";
    fib(n-1, b, a + b);
}

int main() {
    int n, a = 0, b = 1, count = 0;
    cin >> n;
    fib(n, a, b);
    return 0;
}