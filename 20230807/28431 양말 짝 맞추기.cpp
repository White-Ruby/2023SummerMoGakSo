#include <iostream>
int a[10];
using namespace std;
int main() {
    for (int i=0; i<5; i++) {
        int x; cin >> x;
        a[x]++;
    }
    for (int i=0; i<10; i++) {
        if (a[i]%2) {
            cout << i;
            break;
        }
    }   
    return 0;
}