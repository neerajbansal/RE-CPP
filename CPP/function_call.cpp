#include <iostream>
#include <string>

using namespace std;

string convert_to_snake_case(string s) {
    for(int i=0; i < s.length(); i++) {
        if(s[i] == 32) {
            s[i] = '_';
        }
    }
    return s;
}

int main(){
    string s = convert_to_snake_case("Neeraj Bansal");
    cout << s << endl;

    s = convert_to_snake_case("I am re-learning C++ again!!!");
    cout << s << endl;

    s = convert_to_snake_case("This is fun");
    cout << s << endl;

    s = convert_to_snake_case("This is really   fun to play with pointers again after so long.");
    cout << s << endl;

    // char *a = s[0]; 
    // cout << a;
    return 0;
}