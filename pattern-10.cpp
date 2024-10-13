#include<iostream>
using namespace std;

/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * * 
* * 
*

*/ 



void pattern10_a(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


void pattern10_b(int n) {
    for(int i = 1; i < 2*n; i++) {
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int s = 0; s < stars; s++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    pattern10_a(5);
    pattern10_b(5);
    return 0;
}
