#include <iostream>
#include <vector>
using namespace std;
vector <string> a,b;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, idx; cin >> N;
    for (int i=0; i<N; i++) {
        string x; cin >> x;
        a.push_back(x);
        if (x == "?") idx = i;
    }

    int M; cin >> M;
    for (int i=0; i<M; i++) {
        string x; cin >> x;
        b.push_back(x);
    }

    if (N == 1) {
        cout << b[0];
        return 0;
    }

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (b[i] == a[j]) {
                b[i] = "...";
                continue;
            }
        }
    }
    
    if (idx == 0) {
        char e = a[1][0];
        for (int i=0; i<M; i++) {
            if (b[i][b[i].size()-1] == e) {
                cout << b[i];
                break;
            }
        }
    }
    else if (idx == N-1) {
        char s = a[N-2][a[N-2].size()-1];
        for (int i=0; i<M; i++) {
            if (b[i][0] == s) {
                cout << b[i];
                break;
            }
        }
    }
    else {
        char s = a[idx-1][a[idx-1].size()-1];
        char e = a[idx+1][0];
        for (int i=0; i<M; i++) {
            if ((b[i][0] == s) && (b[i][b[i].size()-1] == e)) {
                cout << b[i];
                break;
            }
        }
    }
    return 0;
}