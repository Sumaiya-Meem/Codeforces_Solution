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
        str s; cin>>s;

        map<char,ll>mp;
        for(ll i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        ll sum=0;
        map<char, ll>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++) {
            //cout << it->first << " " << it->second << endl;
            if(it->second %2==1){sum++;}
        }
        (sum-1)<=k ? Y:N;




    }
    return 0;
}
