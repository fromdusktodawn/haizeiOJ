#include <iostream>
#include <cinttypes>
using namespace std;

int64_t ex_gcd(int64_t a, int64_t b, int64_t *x, int64_t *y) {
    if (!b) {
        *x = 1, *y = 0;
        return a;
    }
    int64_t ret = ex_gcd(b, a % b, y, x);
    *y -= a / b * (*x);
    return ret;
}

int64_t lmc(int64_t a, int64_t b) {
    int64_t x, y;
    return a * b / ex_gcd(a, b, &x, &y);
}

int main() {
    int64_t a, b;
    cin >> a >> b;
    int64_t x, y;
    int64_t ret = ex_gcd(a, b, &x, &y);
    cout << (((x % (lmc(a, b) / a)) + (lmc(a, b) / a)) % (lmc(a, b) / a));
    return 0;
}
