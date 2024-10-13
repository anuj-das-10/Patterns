#include<iostream>
using namespace std;

/*

E
D E
C D E
B C D E
A B C D E

*/ 

void pattern18_a(int n) {
    for(int i = 0; i < n; i++) {
        for(int ch = 65+n-i-1; ch < 65 + n; ch++) {
            cout << (char) ch << " ";
        }
        cout << endl;
    }
}

void pattern18_b(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
    pattern18_a(5);
    pattern18_b(5);

    return 0;
}