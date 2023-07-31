#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> odds;
vector <int> evens;
vector <int> total;
int a[200000];
bool c[200000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        for (int i=0; i<n; i++) {
            int x; cin >> x;
            total.push_back(x);
            if (x % 2) {
                c[i] = true;
                odds.push_back(x);
            }
            else evens.push_back(x);
        }
        sort(odds.begin(), odds.end());
        sort(evens.begin(), evens.end());
        sort(total.begin(), total.end());

        int oddindex = 0;
        int evenindex = 0;
        for (int i=0; i<n; i++) {
            if (c[i]) a[i] = odds[oddindex++];
            else      a[i] = evens[evenindex++];
        }
        bool check = true;
        for (int i=0; i<n; i++) {
            if (a[i] != total[i]) {
                check = false;
                break;
            }
        }
        for (int i=0; i<n; i++) cout << a[i] << ' '; cout << '\n';
        for (int i=0; i<n; i++) cout << total[i] << ' '; cout << '\n';
        if (check) cout << "YES\n";
        else       cout << "NO\n";
        cout << odds.size() << evens.size() << total.size() << '\n';
        for (int i=0; i<odds.size(); i++) odds.pop_back();
        for (int i=0; i<evens.size(); i++) evens.pop_back();
        for (int i=0; i<total.size(); i++) total.pop_back();
        cout << odds.size() << evens.size() << total.size() << '\n';
    }
    return 0;
}