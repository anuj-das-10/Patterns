#include<iostream>
using namespace std;

/*

A
A B
A B C
A B C D
A B C D E

*/ 

void pattern14_a(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 65; j <= 65+i; j++) {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}

void pattern14_b(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
    pattern14_a(5);
    pattern14_b(5);

    return 0;
}