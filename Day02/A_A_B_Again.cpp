#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        int ans=0;
        while(n){
        int rem = n%10;
         ans+=rem;
        n/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}