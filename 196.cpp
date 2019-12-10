/*************************************************************************
	> File Name: 196.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月24日 星期日 06时51分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

int methon(int n) {
    if (n == 2 || n == 3) return 1;
    if (n == 1) return 0;
    else return methon(n - 3) + methon(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << methon(n);
    return 0;
}

