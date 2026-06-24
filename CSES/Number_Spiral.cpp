#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long x,y,ans;
        cin>>y>>x;
        if (y > x) {
            if (y % 2 == 0)
                ans = y * y - x + 1;
            else
                ans = (y - 1) * (y - 1) + x;
        } else {
            if (x % 2 == 0)
                ans = (x - 1) * (x - 1) + y;
            else
                ans = x * x - y + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}