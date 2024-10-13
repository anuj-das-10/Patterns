#include<iostream>
using namespace std;

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/ 

void pattern20_a(int n) {
    // Upper half
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

    // Lower half
    for(int i = 0; i < n; i++) {
        // Stars
        for(int str = n-i-1; str > 0; str--) {
            cout << "*";
        }

        // Spaces
        for(int s = 0; s < 2*i+2; s++) {
            cout << " ";
        }

        // Stars
        for(int str = n-i-1; str > 0; str--) {
            cout << "*";
        }
        cout << endl;
    } 
}

void pattern20_b(int n) {
    int spaces = 2*n - 2;
    for(int i = 1; i <= 2*n - 1; i++) {
        int stars = i;
        if(i > n) stars = 2*n - i;
        // Stars
        for(int str = 1; str <= stars; str++) {
            cout << "*";
        }

        // Spaces
        for(int s = 1; s <= spaces; s++) {
            cout << " ";
        }


        // Stars
        for(int str = 1; str <= stars; str++) {
            cout << "*";
        }
        cout << endl;
        i < n ? spaces -= 2 : spaces += 2; 
    }
}


int main() {
    pattern20_a(5);
    pattern20_b(5);

    return 0;
}