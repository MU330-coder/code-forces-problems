#include <bits/stdc++.h>

using namespace std;
 
#define ll long long
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define endl "\n";

using namespace std;
#define forn(i,n,nn) for(ll i=0;i<=n;i++)

void solve() {
    string x;
    cin >> x ;
    string res;

    for (int i =0 ;i<x.size();i++) {

        res += x[i];
        res += x[i];

    }
    //cout << res << endl;
    for (int o = 0 ;o < res.size()/2;o++) {
        int f = o;
        int s = o+1;
        int l = (res.size()-1) -o;
        int al = l -1;
        if ((res[f] != res[l])) {

            res[f] = res[l];
            res[al]  = res[s];



            }
        else { 
            continue;

        }
    }
    cout << res << endl;


}

vector<ll> v;
int main(void) {
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    ll t;
    cin >> t;
    while(t--){

        solve();

    }


    return 0;
}








