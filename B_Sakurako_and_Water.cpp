#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int mn =0;
        for(int j=0;j<n-i;j++){
            mn =min(mn,a[i+j][j]);
        }
        ans+= max(0LL,-mn);
    }
    for(int j=1;j<n;j++){
        int mn =0;
        for(int i=0;i<n-j;i++){
            mn =max(mn,a[i][j+1]);
        }
        ans+= max(0LL,-mn);
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while (k--) {
        solve();
    }

    return 0;

}