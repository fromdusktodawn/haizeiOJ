/*************************************************************************
	> File Name: 38.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月08日 星期日 23时23分33秒
 ************************************************************************/

#include <iostream>
#include <cinttypes>
#include <vector>
using namespace std;


const int MAX_N = 1000;

struct BigInt {
    BigInt(int x) {
        num.push_back(x);
        proccess_digit();
    }
    void proccess_digit() {
        for (int i = 0; i < num.size(); i++) {
            if (num[i] < 10) continue;
            if ((i + 1) == num.size())num.push_back(0);
            num[i + 1] += num[i] / 10;
            num[i] %= 10;
        } 
    }
    BigInt operator+(BigInt b) {
        BigInt c(*this);
        for (int i = 0; i < b.num.size(); i++) {
            if (i == c.num.size()) c.num.push_back(0);
            c.num[i] += b.num[i];
        }
        c.proccess_digit();
        return c;
    }
    vector<int> num;
};

ostream& operator<<(ostream &out, BigInt &b) {
    for (int i = b.num.size() - 1; i >= 0; i--) {
        out << b.num[i];
    }
    return out;
}

void solve(int n) {
    BigInt a(0), b(1), c(0);
    while (n--) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << b << endl;
    return ;
}

int main() {
    int n;
    while (cin >> n) solve(n);
    return 0;
}
