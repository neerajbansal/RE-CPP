#include <iostream>
#include <string>

using namespace std;

void print_my_first_name(string);
void print_my_last_name(string);

#define NAME(n, b) print_my_first_name(n);print_my_last_name(b);

void print_my_first_name(string n) {
    cout << n;
}

void print_my_last_name(string n) {
    cout << " " << n << endl;  // Adding a space for formatting
}

int main() {
    string n = "Neeraj", b = "Bansal";
    NAME(n, b);
    return 0;
}
