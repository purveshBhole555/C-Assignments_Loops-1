#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 3;
    int r = 4;
    int term = a;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << term << " ";
        term *= r;
    }

    return 0;
}

// output is 
4
3 12 48 192 