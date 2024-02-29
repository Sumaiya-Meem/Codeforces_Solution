#include <bits/stdc++.h>
using namespace std;
#define AS 200005
#define INT_MIN 10000000
#define str string
#define ll long long int
#define tc ll tc;cin>>tc;while(tc--)
#define Y cout<<"YES"<<endl
#define N cout<<"NO"<<endl

int main() {
    tc {
        ll n,k;  cin>>n>>k;
        vector<ll> v(n);
        ll ans=k,e=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%k==0){ans=0;}
            else if(v[i]%2==0){e++;}
            ans=min(ans,k-(v[i]%k));
        }
        if(k==4){
            if(e>=2){ans=0;}
            else if(e==1){ans=min(ans,1ll);}
            ans=min(ans,2ll);
        }
        cout<<ans<<endl;

    }
    return 0;
}

