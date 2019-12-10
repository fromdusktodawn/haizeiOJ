/*************************************************************************
	> File Name: 318.c
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月08日 星期日 16时06分04秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

void ex_gcd(int64_t a, int64_t b, int64_t *x, int64_t *y) {
    if (!b) {
        *x = 1, *y = 0;
        return ;
    }
    int64_t xx, yy;
    ex_gcd(b, a % b, y, x);
    *y -= a / b * *x;
    return ;
}

int main() {
    int64_t a, b, x, y;
    while (~scanf("%" PRId64 "%" PRId64, &a, &b)) {
        ex_gcd(a, b, &x, &y);
        int64_t t = b;
        printf("%"PRId64"\n", ((x % t + t) % t));
    }
    return 0;
}
