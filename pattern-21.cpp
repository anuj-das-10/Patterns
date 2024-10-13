#include<iostream>
using namespace std;

/*

* * * * *
*       *
*       *
*       *
* * * * *

*/ 

void pattern21_a(int n) {
    for(int i = 0; i < n; i++) {
        // Starting and Ending Line!
        if(i == 0 || i == n-1) {
            for(int str = 0; str < n; str++) {
                cout << "* ";
            }
            cout << endl;
        }
        else {
            // Spaces
            cout << "*";
            for(int s = 0; s < 2*n-3; s++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
}

void pattern21_b(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "* ";
            } 
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}


int main() {
    pattern21_a(5);
    pattern21_b(5);

    return 0;
}