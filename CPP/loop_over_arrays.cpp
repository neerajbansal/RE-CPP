#include<iostream>

using namespace std;

int main() {
    string cars[5] = {"ford", "tesla", "BMW", "Ferrari", "Porshe"};

    for(int i = 0; i < 100; i++){
        //No upper bound checks on array, so it will give results in memory.
        cout << i << ": " + cars[i] +  "\n";
    }
    return 0;
}

