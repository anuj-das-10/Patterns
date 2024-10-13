#include<iostream>
using namespace std;

/*

A
B B
C C C
D D D D
E E E E E

*/ 

void pattern16_a(int n) {
    char ch = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern16_b(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
    pattern16_a(5);
    pattern16_b(5);

    return 0;
}