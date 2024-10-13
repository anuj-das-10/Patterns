#include<iostream>
using namespace std;

/*

    * 
   ***
  ***** 
 ******* 
*********
*********
 ******* 
  ***** 
   ***
    * 

*/ 

void pattern7(int n) {
    for(int i = 0; i < n; i++) {
        for(int s = 0; s < n-i-1; s++) {
            cout << " ";
        }
        
        for(int str = 0; str < 2 * i + 1; str++) {
            cout << "*";
        }

        for(int s = 0; s < n-i-1; s++) {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern8(int n) {
    for(int i = 0; i < n; i++) {
        // Spaces
        for(int s = 0; s < i; s++) {
            cout << " ";
        }

        // Stars
        for(int star = 0; star < 2*n - (2 * i + 1); star++) {
            cout << "*";
        }

        // Spaces
        for(int s = 0; s < i; s++) {
            cout << " ";
        }
 
        cout << endl;
    }
}

void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

int main() {
    pattern9(5);
}