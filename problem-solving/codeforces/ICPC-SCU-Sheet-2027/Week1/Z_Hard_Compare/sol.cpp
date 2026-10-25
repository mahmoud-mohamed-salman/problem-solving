// ============================================
// Problem : Z - Hard Compare
// Link    : https://codeforces.com/group/nQoeDsyAHa/contest/715514/problem/Z
// Status  : [ ] Not solved  [ ] WA  [ ] Accepted
// Idea    : If A^B> C^D print "YES" otherwise, print "NO".
// ============================================
#include <bits/stdc++.h>
using namespace std;

void solve() {
    // code here
    long long A,B,C,D;
    cout << pow(10, 400);
    
    cin >> A >> B >> C>>D;
    if (B * log10(A)> D* log10(C))
    {
      cout << "YES"<<"\n";
    }
    else{

        cout << "NO" ;


    }
    




}

int main() {
    // write /read speed
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    int t = 1;
    // cin >> t;   //more than one case
    while (t--) {
        solve();
    }
    return 0;
}
