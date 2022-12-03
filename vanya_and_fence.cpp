#include <bits/stdc++.h>

using namespace std;
 
#define ll long long
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define endl "\n";

#define forn(i,n,nn) for(int i=n;i<=nn;i++)

void solve() {

}


int main(void) {
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


    int n, f;
    cin >> n >> f;
    int arr[n];
    forn(i,0,n-1){ 

        cin >> arr[i];

    }
    int res = 0;

    for(auto num : arr) {

        if (num > f) {

            res += 2;

        }
        if (num <= f) {

            res += 1;
        }
    }


    cout << res << endl;




    return 0;
}
