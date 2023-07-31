#include <iostream>
#include <stack>
using namespace std;
stack <int> s;
long long ans[2][2];
long long temp[2][2];
long long init[2][2];

int main() {
    long long N; cin >> N;
    if (N == 1) { cout << 1; return 0; }

    N -= 1;
    while (N>1) {
        if (N%2) { N-=1; s.push(1); }
        else     { N/=2; s.push(0); }
    }

    ans[0][0] = init[0][0] = 1;
    ans[0][1] = init[0][1] = 1;
    ans[1][0] = init[1][0] = 1;
    ans[1][1] = init[1][1] = 0;
    
    while (!s.empty()) {
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                if (s.top()) temp[i][j] = ans[i][0] * init[0][j] + ans[i][1] * init[1][j];
                else         temp[i][j] = ans[i][0] * ans[0][j] + ans[i][1] * ans[1][j];
            }
        }
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                ans[i][j] = temp[i][j] % 1000000007;
            }
        }
        s.pop();
    }
    cout << ans[0][0];
    return 0;
}

// 점화식을 행렬로 바꿔서 분할정복
// ( Fn ) = (1 1)(1)
// (Fn-1)   (1 0)(0)