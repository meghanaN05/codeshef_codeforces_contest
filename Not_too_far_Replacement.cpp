#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=0;i<=n;i++) cin>>a[i];
    sort(a.begin(),a.end()+n);
  for(int i=0;i<n;i++){
    if(a[i]<=a[n]) continue;
     swap(a[i],a[n]);
    if(a[i]>2*a[n]) break;
  }
  int ans =accumulate(a.begin(),a.end(),0)-a[n];
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