#include<iostream>
#include<climits>

using namespace std;

int main(){
    float a,b;
    a = 231212133333.9078766812242432321231319387193793719371379186391739127192891379137891839173913;
    b = 231212133333.9078766812242432321231319387193793719371379186391739127192891379137891839173914;

    cout << MAXFLOAT << " " <<sizeof(int) << endl;
    if (a > b) {
        cout << a;
    }
    else if (b > a) {
        cout << b;
    }
    else {
        cout << a << "=" << b;
    }
    cout << a << " " << b;
}