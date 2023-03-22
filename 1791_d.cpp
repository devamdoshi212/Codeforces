//copied from chatgpt
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int t, n;
char s[N];
int cnt[26];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> (s + 1);
        memset(cnt, 0, sizeof(cnt));
        for (int i = 1; i <= n; i++) {
            cnt[s[i] - 'a']++;
        }
        sort(cnt, cnt + 26);
        int ans = 0;
        for (int i = 25; i >= 0; i--) {
            if (cnt[i] > 0) {
                ans++;
                cnt[i]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
