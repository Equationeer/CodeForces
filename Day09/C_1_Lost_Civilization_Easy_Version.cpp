#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> st;
        st.reserve(n);

        int roots = 0;

        for (long long x : a) {
            if (st.empty()) {
                roots++;
                st.push_back(x);
                continue;
            }

            if (x == st.back() + 1) {
                st.push_back(x);
                continue;
            }

            while (!st.empty() && st.back() >= x) st.pop_back();

            if (!st.empty() && x == st.back() + 1) {
                st.push_back(x);
            } else {
                roots++;
                st.clear();
                st.push_back(x);
            }
        }

        cout << roots << "\n";
    }
    return 0;
}
