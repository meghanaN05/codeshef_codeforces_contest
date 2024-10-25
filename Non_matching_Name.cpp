#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        bool found =false;
        for(char ch ='a';ch<='z';ch++){
            bool  ok =true;
            for(int i=0;i<n;i++){
                if(s[i]==ch){
                    ok =false;
                    break;
                }
            }
            for(int i=0;i<m;i++){
                if(t[i]==ch){
                    ok =false;
                    break;
                }
            }
            if(ok){
                found=true;
                break;
            }

        }
       cout<<(found?"Yes":"No")<<endl;

        }
        return 0;
    }
    
