/*............bismillahir rahmanir rahim...............*/

// author :  Muhammad Najmul Hasan Nayeem (SUST MATH 17)

#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
 
using namespace std;

#define ff first
#define ss second
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

typedef long long ll;
typedef unsigned long long ull;

// typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

mt19937 mt_rand(chrono::high_resolution_clock::now().time_since_epoch().count());
const int N = 2e5 + 5;
int firstn = -1, cs = 0;
void solve() {
    ll l, r;
    cin >> l >> r;
    ll res = l * (l + 1);
    for (ll i = l; i <= r; i++) {
    	for (ll j = i + 1; j <= r; j++) {
    		res = min(res, i * j / __gcd(i, j));
    	}
    }
    cout << res << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);//cin.tie(NULL);cout.tie(NULL);
    int q=1;
    cin>>q;
    // SI(q);
    for(int kase=1; kase<=q; kase++)
    {
        // cout<<"Case "<<kase<<": ";
        // printf("Case %d: ",kase );
        solve();
    }
    return 0;
}