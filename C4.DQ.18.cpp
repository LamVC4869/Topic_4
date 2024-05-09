#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S (int n) {
    if (n == 1) return 1;
    return sqrt(n + S(n - 1));
}

int main () {
    cout.precision(3);
    int n; cin >> n;
    cout << fixed << S(n);
    return 0;
}
