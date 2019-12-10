/*************************************************************************
	> File Name: test.cpp
	> Author: Happyeveryday
	> Mail: 2563546603@qq.com
	> Created Time: 2019年12月10日 星期二 20时52分01秒
 ************************************************************************/

#include <iostream>
using namespace std;

void func(int *arr) {
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    return ;
}


int main() {
    int arr[5] = {0};
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    func(arr);
    return 0;
}
