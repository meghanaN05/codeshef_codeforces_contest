#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(y<=2*x){
        cout<<"METAL"<<endl;
    }
    else{
        cout<<"PLASTIC"<<endl;
    }
    return 0;
}