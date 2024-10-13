#include<iostream>
using namespace std;

/*

A B C D E
A B C D
A B C
A B
A

*/ 

void pattern15_a(int n) {
    for(int i = n; i > 0; i--) {
        for(int j = 65; j < 65+i; j++) {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}

void pattern15_b(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + (n-i-1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
    pattern15_a(5);
    pattern15_b(5);

    return 0;
}