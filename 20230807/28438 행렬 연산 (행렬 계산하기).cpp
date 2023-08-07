#include <iostream>
using namespace std;
int p[500001], q[500001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, M, Q, a, b, c;
    cin >> N >> M >> Q;
    for (int i=0; i<Q; i++) {
        cin >> a >> b >> c;
        if (a%2) p[b]+=c;
        else q[b]+=c;
    }

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            cout << p[i] + q[j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}