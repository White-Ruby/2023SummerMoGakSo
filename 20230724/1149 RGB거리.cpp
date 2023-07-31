#include <iostream>
#include <algorithm>
using namespace std;
int cost[1000][3];
int save[1000][3];
int main() {
    int N; cin >> N;
    for (int i=0; i<N; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }
    save[0][0] = cost[0][0];
    save[0][1] = cost[0][1];
    save[0][2] = cost[0][2];
    for (int i=0; i<N-1; i++) {
        save[i+1][0] = min(save[i][1], save[i][2]) + cost[i+1][0];
        save[i+1][1] = min(save[i][0], save[i][2]) + cost[i+1][1];
        save[i+1][2] = min(save[i][0], save[i][1]) + cost[i+1][2];
    }
    int ans = min(save[N-1][0], save[N-1][1]);
    cout << min(ans, save[N-1][2]);
    return 0;
}