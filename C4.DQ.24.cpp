#include <iostream>

using namespace std;

long long fibo (int n) {
    if (n <= 2) return 1;
    return fibo (n - 1) + fibo(n - 2);
}

int main () {
    int n; cin >> n;
    cout << fibo(n);
    return 0;
}
