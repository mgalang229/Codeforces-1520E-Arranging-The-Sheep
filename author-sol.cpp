#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (char c : s) {
        cnt += (c == '*' ? 1 : 0);
    }
    int pos = -1, cur = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            cur++;
            if (cur == cnt / 2) {
                pos = i;
            }
        }
    }
    long long ans = 0;
    cur = pos - cnt / 2;
    // cout << pos << ", " << cnt / 2 << " = " << cur << "\n";
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            ans += abs(cur - i);
            cur++;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        test_case();
    }
}
