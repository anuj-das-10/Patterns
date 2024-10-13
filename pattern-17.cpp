#include<iostream>
using namespace std;

/*

   A
  ABA
 ABCBA
ABCDCBA

*/ 

void pattern17_a(int n) {
    for(int i = 0; i < n; i++) {
        // Spaces
        for(int s = 0; s < n-i-1; s++) {
            cout << " ";
        }

        // Letters (Forward)
        for(int l = 65; l <= 65 + i; l++) {
            cout << (char) l;
        }
        // Letters (Backward)
        for(int rl = 65+i-1; rl >= 65; rl--) {
            cout << (char) rl;
        }

        // Spaces
        for(int s = 0; s < n-i-1; s++) {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern17_b(int n) {
    for(int i = 0; i < n; i++) {
        // Spaces
        for(int s = 0; s < n-i-1; s++) {
            cout << " ";
        }

        // Alphabets
        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        for(int l = 1; l <= 2*i + 1; l++) {
            cout << ch;
            l <= breakpoint ? ch++ : ch--;
        }

        // Spaces
        for(int s = 0; s < n-i-1; s++) {
            cout << " ";
        }

        cout << endl;
    }
}


int main() {
    pattern17_a(4);
    pattern17_b(4);

    return 0;
}