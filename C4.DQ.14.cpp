#include <iostream>
#include <iomanip>

using namespace std;

long long P (int n) {
    if (n == 1) return 1;
    return n + P(n - 1);
}

double S (int n) {
    if (n == 1) return 1;
    return 1.0/P(n) + S(n - 1);
}

int main () {
    int n; cin >> n;
    cout << fixed << setprecision(3) << S(n);
    return 0;
}
