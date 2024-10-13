#include<iostream>
using namespace std;

/*

    * 
   ***
  ***** 
 ******* 
*********

*/ 

void pattern7(int n) {
    for(int i = 0; i < n; i++) {
        // Spaces
        for(int s = n-1-i; s >= 0; s--) {
            cout << " ";
        }

        // Stars
        for(int star = 0; star < 2*i+1; star++) {
            cout << "*";
        }

        // Spaces
        for(int s = n-1-i; s >= 0; s--) {
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    pattern7(5);
}