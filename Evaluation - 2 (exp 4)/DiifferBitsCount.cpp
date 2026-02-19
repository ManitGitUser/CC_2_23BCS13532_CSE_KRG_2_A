#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;

int solve(vector<int>& A) {
    const int MOD = 1e9 + 7;
    ll ans = 0;
    int n = A.size();

    for (int bit = 0; bit < 32; bit++) {
        ll count1 = 0;
        for (int x : A) {
            if (x & (1 << bit))
                count1++;
        }
        ll count0 = n - count1;
        ans = (ans + (count1 * count0 * 2) % MOD) % MOD;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i=0;i<n;i++)
        cin >> vec[i];
    cout<<differ_bit_count(v);
    return 0;
}
