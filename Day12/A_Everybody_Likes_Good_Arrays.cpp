#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin>>n;
        long long operation =0;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if((a[i]%2)==(a[i+1]%2))
              operation++;
        }
        cout<<operation<<endl;
    }
}