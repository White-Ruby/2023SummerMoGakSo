#include <iostream>
#include <algorithm>
using namespace std;
int input[1000];
int save[1000];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    for (int i=0; i<N; i++) 
        cin >> input[i];
    
    for (int i=0; i<N; i++) {
        int max = 0;
        for (int j=0; j<i; j++) {
            if ((input[j] < input[i]) && (max < save[j])) {
                max = save[j];
            }
        }
        save[i] = max+1;
    }

    int ans = 0;
    for (int i=0; i<N; i++) {
        ans = max(ans, save[i]);
    }
    cout << ans;
    return 0;
}