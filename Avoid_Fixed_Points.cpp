#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll,ll> pl;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fo(i, a, b) for(int i = 0 ; i <= b; i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        
    }
   
    for(int i = 1; i <= a.size(); i++){
        
        if(i == a[i]){
            
            a.insert(a.begin() + i, a[i] - 1);
            
        
        }
        
            
    }  
            
    for(auto it : a){
        cout << it <<" ";
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}