#include<iostream>
using namespace std;

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/ 

void pattern11(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = i; j > 0; j--) {
            (j%2 == 0) ? cout << "0 " : cout << "1 ";
        }
        cout << endl;
    }
}

int main() {
    pattern11(5);
    return 0;
}