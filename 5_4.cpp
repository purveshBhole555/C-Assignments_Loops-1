#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 4;
    int d = 3;
    int term = a;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << term << " ";
        term += d;
    }

    return 0;
}


// outut is
4
4 7 10 13 
