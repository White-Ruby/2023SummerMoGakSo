#include <iostream>
#include <algorithm>
using namespace std;
int h[1000][3], s[1000][3];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    for (int i=0; i<N; i++) cin >> h[i][0] >> h[i][1] >> h[i][2];

    int ans = 10000000;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i == j) s[0][j] = h[0][j];
            else s[0][j] = 10000000;
        }
        for (int j=1; j<N; j++) {
            s[j][0] = min(s[j-1][1], s[j-1][2]) + h[j][0];
            s[j][1] = min(s[j-1][0], s[j-1][2]) + h[j][1];
            s[j][2] = min(s[j-1][0], s[j-1][1]) + h[j][2];
        }
        for (int j=0; j<3; j++) {
            if (i != j) ans = min(ans, s[N-1][j]);
        }
    }
    cout << ans;
    return 0;
}