#include<bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define ll long long
void solve(){
	ll l = rng() % 1000;
	ll r = l + rng() % 1000;
	cout << 1 << '\n';
	cout << l << ' ' << r << '\n';
}

int32_t main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
}