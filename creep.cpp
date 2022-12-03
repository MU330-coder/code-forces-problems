#include <bits/stdc++.h>

using namespace std;
 
#define ll long long
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define endl "\n";

#define forn(i,n,nn) for(ll i=0;i<=n;i++)

void solve() {

    int zer,one;
    cin >> zer >> one;

    string res;

    if (abs(zer - one) >=2) {

        if(zer > one) {
            for(int i =0 ; i < one;i++)
                res += '1';
            for(int i =0 ; i < zer;i++)
                res += '0';
        }

        if(zer < one) {
            for(int i =0 ; i < zer;i++)
                res += '0';
            for(int i =0 ; i < one;i++)
                res += '1';

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
