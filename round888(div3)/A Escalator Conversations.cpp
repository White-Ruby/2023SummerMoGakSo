#include <iostream>
using namespace std;
int t[50];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T, n, m, k, H, M, diff, ans; cin >> T;
    while (T--) {
        cin >> n >> m >> k >> H;
        for (int i=0; i<n; i++) cin >> t[i];
        
        if (m == 1) {
            cout << 0 << '\n';
            continue;
        }

        ans = 0; M = (m-1) * k;
        for (int i=0; i<n; i++) {
            diff = abs(t[i] - H);
            if (diff == 0) continue;
            if ((diff <= M) && (diff % k == 0)) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}