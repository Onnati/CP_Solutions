#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
string getBinary(ll num){string s="";while(num!=0){ if(num%2==0){s+="0";}else{s+="1";}num>>=1;}reverse(s.begin(),s.end());return s;}
int main()
{
	boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	ll tc;
	cin>>tc;
	while(tc--)
	{
            ll n,k1,k2,w,bl;
            cin>>n>>k1>>k2;
            cin>>w>>bl;
            ll bpos=0,wpos=0;
            ll temp;

            ll a=n-k1,b=n-k2;
           
            temp=min(a,b);
            a-=temp;
            b-=temp;
            bpos=temp+(a/2)+(b/2);
           

            temp=min(k1,k2);
            k1-=temp;
            k2-=temp;
            wpos=temp+(k1/2)+(k2/2);
         
         
            if(bpos>=bl && wpos>=w)
            {
                cout<<"YES\n";

            }
            else
            {
                cout<<"NO\n";

            }
	}
	return 0;
}





