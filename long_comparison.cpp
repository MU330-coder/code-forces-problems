#include <bits/stdc++.h>


#define ll long long

#define forn(i,t,n) for(ll i=0;i<=t;n++)

using namespace std;

void solve(){

    int x_1,x_2,p_1,p_2;

    cin >> x_1 >> p_1 ;
    cin >> x_2 >> p_2 ;

    while(p_1--){

        x_1 *= 10;
    }
    while(p_2--) {
        x_2 *= 10;
    }

    if(x_1 < x_2)  {

        cout << '<' << endl;
        return;
    }
    if(x_1 > x_2)  {
        cout << '>' << endl;
        return;
    }
    if(x_1 == x_2) {
        cout << '=' << endl;
        return;

    }
}


using namespace std;
int main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; 
    cin >> t;

    while(t--){

        solve();


    }

}
