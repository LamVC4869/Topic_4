#include <iostream>

using namespace std;

long long T (int x, int n) {
    if (n == 0) return 1;
    return x * T(x, n - 1);
}

int main () {
    int n, x; cin >> n >> x;
    cout << T(x, n);
}
