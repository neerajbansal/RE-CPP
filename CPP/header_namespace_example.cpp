#include"name.h"
#include<iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int res = a + b;
    cout << res << endl;
    cout << first::print() + " " + last::print() << endl;
    return res;
}

