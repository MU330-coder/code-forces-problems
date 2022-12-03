#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define endl "\n";

#define forn(i,n,nn) for(ll i=0;i<=n;i++)

void solve() {
    ll n; cin >> n;

    vector<ll>v(n);
    forn(num,0,n-1) cin >> v[num]; 

    //sort(all(v));

    bool CONT = true;
    ll last = n-1;
    ll arr[n];
    bool no = false;
    arr[0] = v[0];
    while(CONT){

        cout << "aeta"  << endl;
        if( last != 0 && v[last] > v[last-1]) {

            cout << "aeta"  << endl;
            
            ll tmp = v[last];
            while(abs(tmp - v[last-1] != )) {

                tmp -= v[last-1];

            }
            if(tmp == v[last-1]) {
                cout << "aeta"  << endl;
                arr[last] = 1;

            }
        }
        if(v[last] < v[last-1]) {
            CONT = false;
            no = true;

        }
        last--;
    }

    forn(u,0,sizeof(arr)/sizeof(arr)-1) {
        cout << v[u]; 
    }


}

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
