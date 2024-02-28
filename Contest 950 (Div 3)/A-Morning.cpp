#include <bits/stdc++.h>
using namespace std;
#define AS 200005
#define INT_MIN 10000000
#define str string
#define ll int
#define tc ll tc;cin>>tc;while(tc--)
#define Y cout<<"YES"<<endl
#define N cout<<"NO"<<endl

int main() {
    tc {
        str s; cin>>s;
        ll p1=0,p2=0,p3=0,p4=0;
        p1=s[0]-'0';
        p2=s[1]-'0';
        p3=s[2]-'0';
        p4=s[3]-'0';

        if(p1==0){p1=10;}
        if(p2==0){p2=10;}
        if(p3==0){p3=10;}
        if(p4==0){p4=10;}

        ll ans=4+abs(1-p1)+abs(p1-p2)+abs(p2-p3)+abs(p3-p4);
        cout<<ans<<endl;
    }
    return 0;
}
