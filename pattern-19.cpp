#include<iostream>
using namespace std;

/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/ 

void pattern19_a(int n) {
    // Upper half
    for(int i = 0; i < n; i++) {
        // Stars
        for(int str = n-i; str > 0; str--) {
            cout << "*";
        }

        // Spaces
        for(int s = 0; s < 2*i; s++) {
            cout << " ";
        }

        // Stars
        for(int str = n-i; str > 0; str--) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for(int i = 0; i < n; i++) {
        // Stars
        for(int str = 0; str <= i; str++){
            cout << "*";
        }

        // Spaces
        for(int s = 2*n-(2*i+2); s > 0; s--) {
            cout << " ";
        }

        // Stars
        for(int str = 0; str <= i; str++){
            cout << "*";
        }
        
        cout << endl;
    }
}

void pattern19_b(int n) {
    int initS = 0;
    for(int i = 0; i < n; i++) {
        // Stars
        for(int str = n-i; str > 0; str--) {
            cout << "*";
        } 

        // Spaces
        for(int s = 0; s < initS; s++) {
            cout << " ";
        }

        // Stars
        for(int str = n-i; str > 0; str--) {
            cout << "*";
        } 
        cout <<  endl;
        initS += 2;
    }

    initS = 2*n - 2;
    for(int i = 0; i < n; i++) {
        // Stars
        for(int str = 0; str <= i; str++) {
            cout << "*";
        }

        // Spaces
        for(int s = 0; s < initS; s++) {
            cout << " ";
        }

        // Stars
        for(int str = 0; str <= i; str++) {
            cout << "*";
        }
        cout << endl;
        initS -= 2;
    }
}


int main() {
    pattern19_a(5);
    pattern19_b(5);

    return 0;
}