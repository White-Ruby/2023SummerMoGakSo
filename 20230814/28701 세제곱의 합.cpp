#include <iostream>
using namespace std;
int main() {
    int N, a, b; cin >> N;
    a = b = 0;
    for (int i=1; i<=N; i++) {
        a+=i;
        b+=i*i*i;
    }
    cout << a << '\n' << b << '\n' << b;
    return 0;
}