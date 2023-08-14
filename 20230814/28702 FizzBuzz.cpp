#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b,c; cin >> a >> b >> c;
    int d, e, f, ans; d = e = f = 0;
    if (a[0] != 'F' && a[0] != 'B') { d = stoi(a); ans = d + 3; }
    if (b[0] != 'F' && b[0] != 'B') { e = stoi(b); ans = e + 2; }
    if (c[0] != 'F' && c[0] != 'B') { f = stoi(c); ans = f + 1; }

    if (ans % 3 == 0 && ans % 5 == 0) cout << "FizzBuzz";
    if (ans % 3 == 0 && ans % 5 != 0) cout << "Fizz";
    if (ans % 3 != 0 && ans % 5 == 0) cout << "Buzz";
    if (ans % 3 != 0 && ans % 5 != 0) cout << ans;
    
    return 0;
}