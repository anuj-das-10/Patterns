#include<iostream>
using namespace std;

/*

1      1
12    21
123  321
12344321

*/ 

void pattern12(int n) {
    for(int i = 1; i <= n; i++) {
        // numbers
        for(int z = 1; z <= i; z++) {
            cout << z;
        }
        // spaces
        for(int s = 0; s < 2*n-(2*i); s++) {
            cout << " ";
        }

        // numbers
        for(int z = i; z >= 1; z--) {
            cout << z;
        }
        cout << endl;
    }
}

int main() {
    pattern12(4);
    return 0;
}