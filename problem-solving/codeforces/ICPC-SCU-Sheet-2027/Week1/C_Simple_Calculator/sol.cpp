// ============================================
// Problem : C - Simple Calculator
// Link    : https://codeforces.com/group/nQoeDsyAHa/contest/715514/problem/C
// Status  : [ ] Not solved  [ ] WA  [ ] Accepted
// Idea    : Only one line containing two separated numbers X, Y  --- (1  ≤  X, Y  ≤  10^5)-----
// ============================================
#include <bits/stdc++.h>
using namespace std;

void solve() {
   // start point
   long long x,y;
   
   cin >> x >> y;
    // "X + Y = summation result" without quotes.
    // "X * Y = multiplication result" without quotes.
    // "X - Y = subtraction result" without quotes.

   cout <<x<<" "<<"+"<<" "<<y<<" "<<"=" <<" "<<x+y<<"\n";
   cout <<x<<" "<<"*"<<" "<<y<<" "<<"="<<" "<<x*y<<"\n";
   cout <<x<<" "<<"-"<<" "<<y<<" "<<"="<<" "<<x-y<<"\n";





}

int main() {
   // w/r speed
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
    
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    int t = 1;
    // cin >> t;   //  لو المسألة فيها أكتر من test case
    while (t--) {
        solve();
    }
    return 0;
}
