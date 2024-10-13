#include<iostream>
using namespace std;

/*

*********
 ******* 
  ***** 
   ***
    * 

*/ 

void pattern8_a(int n) {
    for(int i = 0; i < n; i++) {
        // Spaces
        for(int s = 0; s < i; s++) {
            cout << " ";
        }

        // Stars
        for(int star = 2*i+1; star <= 2*n-1; star++) {
            cout << "*";
        }

        // Spaces
        for(int s = 0; s < i; s++) {
            cout << " ";
        }

        cout << endl;
    }
}


void pattern8_b(int n) {
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



int main() {
    pattern8_a(5);
    pattern8_b(5);
}