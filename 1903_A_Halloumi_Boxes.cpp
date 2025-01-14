#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int n,k;

    for(int i=0;i<t;i++){
        cin>>n>>k;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k>=2){
            cout<<"YES"<<endl;;
        }else{
            vector<int> v1=v;
            sort(v1.begin(),v1.end());
            if(v1==v){
                cout<<"YES"<<endl;;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}