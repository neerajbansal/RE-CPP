#include<iostream>
#include<climits>

using namespace std;

int set_const_vale() {
    return 5;
}

int main(){
    float a;
    //without initialisation it defaults to max of that data type
    cout << a << " " <<sizeof(a) << endl; // 1.4013e-45 

    a = 6.778;
    cout << a << " " <<sizeof(a) << endl; //6.778

    /*
    A second use case for "const volatile" are read-only hardware registers that may be changed by the hardware. 
    The const part tells the compiler to issue an error when you try write to such SFR. 
    The volatile part tells the compiler that it must re-read the SFR value each time, 
    and must not cache read values.
    */
    volatile const unsigned time_to_live = set_const_vale();
    cout << time_to_live << endl;
}