#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) 
    return 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if ((int)s.size() > 10)
            cout << s.front() << s.size() - 2 << s.back();
        else
            cout << s;
        if (i + 1 < n) cout << '\n';
    }
    return 0;
}