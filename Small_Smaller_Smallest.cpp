#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'



signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while (k--) {
        int n;
    cin>>n;
    string s;
    cin>>s;
    if(s==string(n,'0')){
        cout<<n<<endl;
          continue;
    }
    int ones=0;
    for(int i=0;i<n;i++){
        ones+=s[i]=='1';
    }
    cout<<ones%2<<endl;
    }

    return 0;

}